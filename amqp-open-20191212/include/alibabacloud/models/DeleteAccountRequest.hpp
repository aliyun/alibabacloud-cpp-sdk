// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class DeleteAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DeleteAccountRequest() = default ;
    DeleteAccountRequest(const DeleteAccountRequest &) = default ;
    DeleteAccountRequest(DeleteAccountRequest &&) = default ;
    DeleteAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccountRequest() = default ;
    DeleteAccountRequest& operator=(const DeleteAccountRequest &) = default ;
    DeleteAccountRequest& operator=(DeleteAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimestamp_ != nullptr
        && this->userName_ != nullptr; };
    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DeleteAccountRequest& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DeleteAccountRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The timestamp that indicates when the pair of static username and password that you want to delete was created. Unit: milliseconds.
    // 
    // You can call the [ListAccounts](https://help.aliyun.com/document_detail/472730.html) operation to view the timestamp.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The pair of username and password that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
