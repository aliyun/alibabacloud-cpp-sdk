// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESUBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESUBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class DeleteSubRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSubRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SubId, subId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSubRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SubId, subId_);
    };
    DeleteSubRequest() = default ;
    DeleteSubRequest(const DeleteSubRequest &) = default ;
    DeleteSubRequest(DeleteSubRequest &&) = default ;
    DeleteSubRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSubRequest() = default ;
    DeleteSubRequest& operator=(const DeleteSubRequest &) = default ;
    DeleteSubRequest& operator=(DeleteSubRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subId_ != nullptr; };
    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline int64_t subId() const { DARABONBA_PTR_GET_DEFAULT(subId_, 0L) };
    inline DeleteSubRequest& setSubId(int64_t subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> subId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
