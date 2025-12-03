// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEMINORVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEMINORVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class UpgradeMinorVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeMinorVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NewVersion, newVersion_);
      DARABONBA_PTR_TO_JSON(OldVersion, oldVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeMinorVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NewVersion, newVersion_);
      DARABONBA_PTR_FROM_JSON(OldVersion, oldVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpgradeMinorVersionResponseBody() = default ;
    UpgradeMinorVersionResponseBody(const UpgradeMinorVersionResponseBody &) = default ;
    UpgradeMinorVersionResponseBody(UpgradeMinorVersionResponseBody &&) = default ;
    UpgradeMinorVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeMinorVersionResponseBody() = default ;
    UpgradeMinorVersionResponseBody& operator=(const UpgradeMinorVersionResponseBody &) = default ;
    UpgradeMinorVersionResponseBody& operator=(UpgradeMinorVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newVersion_ == nullptr
        && return this->oldVersion_ == nullptr && return this->requestId_ == nullptr; };
    // newVersion Field Functions 
    bool hasNewVersion() const { return this->newVersion_ != nullptr;};
    void deleteNewVersion() { this->newVersion_ = nullptr;};
    inline string newVersion() const { DARABONBA_PTR_GET_DEFAULT(newVersion_, "") };
    inline UpgradeMinorVersionResponseBody& setNewVersion(string newVersion) { DARABONBA_PTR_SET_VALUE(newVersion_, newVersion) };


    // oldVersion Field Functions 
    bool hasOldVersion() const { return this->oldVersion_ != nullptr;};
    void deleteOldVersion() { this->oldVersion_ = nullptr;};
    inline string oldVersion() const { DARABONBA_PTR_GET_DEFAULT(oldVersion_, "") };
    inline UpgradeMinorVersionResponseBody& setOldVersion(string oldVersion) { DARABONBA_PTR_SET_VALUE(oldVersion_, oldVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradeMinorVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> newVersion_ = nullptr;
    std::shared_ptr<string> oldVersion_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
