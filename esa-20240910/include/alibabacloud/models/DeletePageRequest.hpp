// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeletePageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeletePageRequest() = default ;
    DeletePageRequest(const DeletePageRequest &) = default ;
    DeletePageRequest(DeletePageRequest &&) = default ;
    DeletePageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePageRequest() = default ;
    DeletePageRequest& operator=(const DeletePageRequest &) = default ;
    DeletePageRequest& operator=(DeletePageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeletePageRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the custom error page, which can be obtained by calling the [ListPages](https://help.aliyun.com/document_detail/2850223.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
