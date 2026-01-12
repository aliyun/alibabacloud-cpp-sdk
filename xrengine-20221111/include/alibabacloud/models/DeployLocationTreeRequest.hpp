// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYLOCATIONTREEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYLOCATIONTREEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class DeployLocationTreeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployLocationTreeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceUpdate, forceUpdate_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(SvcId, svcId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployLocationTreeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceUpdate, forceUpdate_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(SvcId, svcId_);
    };
    DeployLocationTreeRequest() = default ;
    DeployLocationTreeRequest(const DeployLocationTreeRequest &) = default ;
    DeployLocationTreeRequest(DeployLocationTreeRequest &&) = default ;
    DeployLocationTreeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployLocationTreeRequest() = default ;
    DeployLocationTreeRequest& operator=(const DeployLocationTreeRequest &) = default ;
    DeployLocationTreeRequest& operator=(DeployLocationTreeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forceUpdate_ == nullptr
        && this->jwtToken_ == nullptr && this->svcId_ == nullptr; };
    // forceUpdate Field Functions 
    bool hasForceUpdate() const { return this->forceUpdate_ != nullptr;};
    void deleteForceUpdate() { this->forceUpdate_ = nullptr;};
    inline bool getForceUpdate() const { DARABONBA_PTR_GET_DEFAULT(forceUpdate_, false) };
    inline DeployLocationTreeRequest& setForceUpdate(bool forceUpdate) { DARABONBA_PTR_SET_VALUE(forceUpdate_, forceUpdate) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline DeployLocationTreeRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // svcId Field Functions 
    bool hasSvcId() const { return this->svcId_ != nullptr;};
    void deleteSvcId() { this->svcId_ = nullptr;};
    inline int64_t getSvcId() const { DARABONBA_PTR_GET_DEFAULT(svcId_, 0L) };
    inline DeployLocationTreeRequest& setSvcId(int64_t svcId) { DARABONBA_PTR_SET_VALUE(svcId_, svcId) };


  protected:
    shared_ptr<bool> forceUpdate_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<int64_t> svcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
