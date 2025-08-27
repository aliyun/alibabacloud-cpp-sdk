// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICESEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOICESEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InvoiceSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvoiceSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, InvoiceSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    InvoiceSearchRequest() = default ;
    InvoiceSearchRequest(const InvoiceSearchRequest &) = default ;
    InvoiceSearchRequest(InvoiceSearchRequest &&) = default ;
    InvoiceSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvoiceSearchRequest() = default ;
    InvoiceSearchRequest& operator=(const InvoiceSearchRequest &) = default ;
    InvoiceSearchRequest& operator=(InvoiceSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->thirdPartId_ != nullptr
        && this->title_ != nullptr && this->userId_ != nullptr; };
    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline InvoiceSearchRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline InvoiceSearchRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline InvoiceSearchRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> thirdPartId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
