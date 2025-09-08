// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVISION_HPP_
#define ALIBABACLOUD_MODELS_REVISION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RevisionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class Revision : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Revision& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RevisionConfig, revisionConfig_);
      DARABONBA_PTR_TO_JSON(RevisionId, revisionId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, Revision& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RevisionConfig, revisionConfig_);
      DARABONBA_PTR_FROM_JSON(RevisionId, revisionId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    Revision() = default ;
    Revision(const Revision &) = default ;
    Revision(Revision &&) = default ;
    Revision(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Revision() = default ;
    Revision& operator=(const Revision &) = default ;
    Revision& operator=(Revision &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->description_ != nullptr && this->revisionConfig_ != nullptr && this->revisionId_ != nullptr && this->weight_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline Revision& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Revision& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // revisionConfig Field Functions 
    bool hasRevisionConfig() const { return this->revisionConfig_ != nullptr;};
    void deleteRevisionConfig() { this->revisionConfig_ = nullptr;};
    inline const RevisionConfig & revisionConfig() const { DARABONBA_PTR_GET_CONST(revisionConfig_, RevisionConfig) };
    inline RevisionConfig revisionConfig() { DARABONBA_PTR_GET(revisionConfig_, RevisionConfig) };
    inline Revision& setRevisionConfig(const RevisionConfig & revisionConfig) { DARABONBA_PTR_SET_VALUE(revisionConfig_, revisionConfig) };
    inline Revision& setRevisionConfig(RevisionConfig && revisionConfig) { DARABONBA_PTR_SET_RVALUE(revisionConfig_, revisionConfig) };


    // revisionId Field Functions 
    bool hasRevisionId() const { return this->revisionId_ != nullptr;};
    void deleteRevisionId() { this->revisionId_ = nullptr;};
    inline string revisionId() const { DARABONBA_PTR_GET_DEFAULT(revisionId_, "") };
    inline Revision& setRevisionId(string revisionId) { DARABONBA_PTR_SET_VALUE(revisionId_, revisionId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline float weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0.0) };
    inline Revision& setWeight(float weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<RevisionConfig> revisionConfig_ = nullptr;
    std::shared_ptr<string> revisionId_ = nullptr;
    std::shared_ptr<float> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
