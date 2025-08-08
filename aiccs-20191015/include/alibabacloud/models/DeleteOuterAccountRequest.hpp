// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOUTERACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOUTERACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class DeleteOuterAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOuterAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OuterAccountId, outerAccountId_);
      DARABONBA_PTR_TO_JSON(OuterAccountType, outerAccountType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOuterAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OuterAccountId, outerAccountId_);
      DARABONBA_PTR_FROM_JSON(OuterAccountType, outerAccountType_);
    };
    DeleteOuterAccountRequest() = default ;
    DeleteOuterAccountRequest(const DeleteOuterAccountRequest &) = default ;
    DeleteOuterAccountRequest(DeleteOuterAccountRequest &&) = default ;
    DeleteOuterAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOuterAccountRequest() = default ;
    DeleteOuterAccountRequest& operator=(const DeleteOuterAccountRequest &) = default ;
    DeleteOuterAccountRequest& operator=(DeleteOuterAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outerAccountId_ != nullptr
        && this->outerAccountType_ != nullptr; };
    // outerAccountId Field Functions 
    bool hasOuterAccountId() const { return this->outerAccountId_ != nullptr;};
    void deleteOuterAccountId() { this->outerAccountId_ = nullptr;};
    inline string outerAccountId() const { DARABONBA_PTR_GET_DEFAULT(outerAccountId_, "") };
    inline DeleteOuterAccountRequest& setOuterAccountId(string outerAccountId) { DARABONBA_PTR_SET_VALUE(outerAccountId_, outerAccountId) };


    // outerAccountType Field Functions 
    bool hasOuterAccountType() const { return this->outerAccountType_ != nullptr;};
    void deleteOuterAccountType() { this->outerAccountType_ = nullptr;};
    inline string outerAccountType() const { DARABONBA_PTR_GET_DEFAULT(outerAccountType_, "") };
    inline DeleteOuterAccountRequest& setOuterAccountType(string outerAccountType) { DARABONBA_PTR_SET_VALUE(outerAccountType_, outerAccountType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> outerAccountId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerAccountType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
