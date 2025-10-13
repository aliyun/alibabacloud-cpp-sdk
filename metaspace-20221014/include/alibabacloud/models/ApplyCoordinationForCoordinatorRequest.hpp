// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORCOORDINATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORCOORDINATORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20221014
{
namespace Models
{
  class ApplyCoordinationForCoordinatorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCoordinationForCoordinatorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoordinationResourceCandidates, coordinationResourceCandidates_);
      DARABONBA_PTR_TO_JSON(InitiatorType, initiatorType_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCoordinationForCoordinatorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoordinationResourceCandidates, coordinationResourceCandidates_);
      DARABONBA_PTR_FROM_JSON(InitiatorType, initiatorType_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ApplyCoordinationForCoordinatorRequest() = default ;
    ApplyCoordinationForCoordinatorRequest(const ApplyCoordinationForCoordinatorRequest &) = default ;
    ApplyCoordinationForCoordinatorRequest(ApplyCoordinationForCoordinatorRequest &&) = default ;
    ApplyCoordinationForCoordinatorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCoordinationForCoordinatorRequest() = default ;
    ApplyCoordinationForCoordinatorRequest& operator=(const ApplyCoordinationForCoordinatorRequest &) = default ;
    ApplyCoordinationForCoordinatorRequest& operator=(ApplyCoordinationForCoordinatorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coordinationResourceCandidates_ != nullptr
        && this->initiatorType_ != nullptr && this->uuid_ != nullptr; };
    // coordinationResourceCandidates Field Functions 
    bool hasCoordinationResourceCandidates() const { return this->coordinationResourceCandidates_ != nullptr;};
    void deleteCoordinationResourceCandidates() { this->coordinationResourceCandidates_ = nullptr;};
    inline const vector<ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates> & coordinationResourceCandidates() const { DARABONBA_PTR_GET_CONST(coordinationResourceCandidates_, vector<ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates>) };
    inline vector<ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates> coordinationResourceCandidates() { DARABONBA_PTR_GET(coordinationResourceCandidates_, vector<ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates>) };
    inline ApplyCoordinationForCoordinatorRequest& setCoordinationResourceCandidates(const vector<ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates> & coordinationResourceCandidates) { DARABONBA_PTR_SET_VALUE(coordinationResourceCandidates_, coordinationResourceCandidates) };
    inline ApplyCoordinationForCoordinatorRequest& setCoordinationResourceCandidates(vector<ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates> && coordinationResourceCandidates) { DARABONBA_PTR_SET_RVALUE(coordinationResourceCandidates_, coordinationResourceCandidates) };


    // initiatorType Field Functions 
    bool hasInitiatorType() const { return this->initiatorType_ != nullptr;};
    void deleteInitiatorType() { this->initiatorType_ = nullptr;};
    inline string initiatorType() const { DARABONBA_PTR_GET_DEFAULT(initiatorType_, "") };
    inline ApplyCoordinationForCoordinatorRequest& setInitiatorType(string initiatorType) { DARABONBA_PTR_SET_VALUE(initiatorType_, initiatorType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ApplyCoordinationForCoordinatorRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<vector<ApplyCoordinationForCoordinatorRequestCoordinationResourceCandidates>> coordinationResourceCandidates_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> initiatorType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Metaspace20221014
#endif
