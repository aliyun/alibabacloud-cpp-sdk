// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALANSWERMETADATA_HPP_
#define ALIBABACLOUD_MODELS_MEDICALANSWERMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MedicalAnswerMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalAnswerMetaData& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, MedicalAnswerMetaData& obj) { 
      (void)j; (void)obj; 
    };
    MedicalAnswerMetaData() = default ;
    MedicalAnswerMetaData(const MedicalAnswerMetaData &) = default ;
    MedicalAnswerMetaData(MedicalAnswerMetaData &&) = default ;
    MedicalAnswerMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalAnswerMetaData() = default ;
    MedicalAnswerMetaData& operator=(const MedicalAnswerMetaData &) = default ;
    MedicalAnswerMetaData& operator=(MedicalAnswerMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
