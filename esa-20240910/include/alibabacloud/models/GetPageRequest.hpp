// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetPageRequest() = default ;
    GetPageRequest(const GetPageRequest &) = default ;
    GetPageRequest(GetPageRequest &&) = default ;
    GetPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPageRequest() = default ;
    GetPageRequest& operator=(const GetPageRequest &) = default ;
    GetPageRequest& operator=(GetPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetPageRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the custom error page, which can be obtained by calling the [ListPages](https://help.aliyun.com/document_detail/2850223.html) operation.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
