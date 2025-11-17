// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATALEVELRULECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATALEVELRULECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DeleteDataLevelRuleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataLevelRuleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataLevelRuleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DeleteDataLevelRuleConfigRequest() = default ;
    DeleteDataLevelRuleConfigRequest(const DeleteDataLevelRuleConfigRequest &) = default ;
    DeleteDataLevelRuleConfigRequest(DeleteDataLevelRuleConfigRequest &&) = default ;
    DeleteDataLevelRuleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataLevelRuleConfigRequest() = default ;
    DeleteDataLevelRuleConfigRequest& operator=(const DeleteDataLevelRuleConfigRequest &) = default ;
    DeleteDataLevelRuleConfigRequest& operator=(DeleteDataLevelRuleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeId_ == nullptr
        && return this->ruleId_ == nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline DeleteDataLevelRuleConfigRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DeleteDataLevelRuleConfigRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cubeId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
