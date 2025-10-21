// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBDIAGNOSISSYMPTOM_HPP_
#define ALIBABACLOUD_MODELS_JOBDIAGNOSISSYMPTOM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class JobDiagnosisSymptom : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobDiagnosisSymptom& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(recommendation, recommendation_);
    };
    friend void from_json(const Darabonba::Json& j, JobDiagnosisSymptom& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(recommendation, recommendation_);
    };
    JobDiagnosisSymptom() = default ;
    JobDiagnosisSymptom(const JobDiagnosisSymptom &) = default ;
    JobDiagnosisSymptom(JobDiagnosisSymptom &&) = default ;
    JobDiagnosisSymptom(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobDiagnosisSymptom() = default ;
    JobDiagnosisSymptom& operator=(const JobDiagnosisSymptom &) = default ;
    JobDiagnosisSymptom& operator=(JobDiagnosisSymptom &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->recommendation_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline JobDiagnosisSymptom& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline JobDiagnosisSymptom& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recommendation Field Functions 
    bool hasRecommendation() const { return this->recommendation_ != nullptr;};
    void deleteRecommendation() { this->recommendation_ = nullptr;};
    inline string recommendation() const { DARABONBA_PTR_GET_DEFAULT(recommendation_, "") };
    inline JobDiagnosisSymptom& setRecommendation(string recommendation) { DARABONBA_PTR_SET_VALUE(recommendation_, recommendation) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> recommendation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
