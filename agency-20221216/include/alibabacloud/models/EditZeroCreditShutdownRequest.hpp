// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITZEROCREDITSHUTDOWNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITZEROCREDITSHUTDOWNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class EditZeroCreditShutdownRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditZeroCreditShutdownRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ShutdownPolicy, shutdownPolicy_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, EditZeroCreditShutdownRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ShutdownPolicy, shutdownPolicy_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    EditZeroCreditShutdownRequest() = default ;
    EditZeroCreditShutdownRequest(const EditZeroCreditShutdownRequest &) = default ;
    EditZeroCreditShutdownRequest(EditZeroCreditShutdownRequest &&) = default ;
    EditZeroCreditShutdownRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditZeroCreditShutdownRequest() = default ;
    EditZeroCreditShutdownRequest& operator=(const EditZeroCreditShutdownRequest &) = default ;
    EditZeroCreditShutdownRequest& operator=(EditZeroCreditShutdownRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->shutdownPolicy_ == nullptr
        && this->uid_ == nullptr; };
    // shutdownPolicy Field Functions 
    bool hasShutdownPolicy() const { return this->shutdownPolicy_ != nullptr;};
    void deleteShutdownPolicy() { this->shutdownPolicy_ = nullptr;};
    inline string getShutdownPolicy() const { DARABONBA_PTR_GET_DEFAULT(shutdownPolicy_, "") };
    inline EditZeroCreditShutdownRequest& setShutdownPolicy(string shutdownPolicy) { DARABONBA_PTR_SET_VALUE(shutdownPolicy_, shutdownPolicy) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline EditZeroCreditShutdownRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // UID
    shared_ptr<string> shutdownPolicy_ {};
    // No Change History
    shared_ptr<int64_t> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
