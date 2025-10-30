// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALPROCESSRESPONSEBODYPROCESSPROCESSNODES_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALPROCESSRESPONSEBODYPROCESSPROCESSNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalProcessResponseBodyProcessProcessNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalProcessResponseBodyProcessProcessNodes& obj) { 
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalProcessResponseBodyProcessProcessNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetApprovalProcessResponseBodyProcessProcessNodes() = default ;
    GetApprovalProcessResponseBodyProcessProcessNodes(const GetApprovalProcessResponseBodyProcessProcessNodes &) = default ;
    GetApprovalProcessResponseBodyProcessProcessNodes(GetApprovalProcessResponseBodyProcessProcessNodes &&) = default ;
    GetApprovalProcessResponseBodyProcessProcessNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalProcessResponseBodyProcessProcessNodes() = default ;
    GetApprovalProcessResponseBodyProcessProcessNodes& operator=(const GetApprovalProcessResponseBodyProcessProcessNodes &) = default ;
    GetApprovalProcessResponseBodyProcessProcessNodes& operator=(GetApprovalProcessResponseBodyProcessProcessNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->saseUserId_ == nullptr
        && return this->username_ == nullptr; };
    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline GetApprovalProcessResponseBodyProcessProcessNodes& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetApprovalProcessResponseBodyProcessProcessNodes& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> saseUserId_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
