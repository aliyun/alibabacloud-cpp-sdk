// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSERVERCERTIFICATERESPONSEBODYSUBJECTALTERNATIVENAMES_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSERVERCERTIFICATERESPONSEBODYSUBJECTALTERNATIVENAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class UploadServerCertificateResponseBodySubjectAlternativeNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadServerCertificateResponseBodySubjectAlternativeNames& obj) { 
      DARABONBA_PTR_TO_JSON(SubjectAlternativeName, subjectAlternativeName_);
    };
    friend void from_json(const Darabonba::Json& j, UploadServerCertificateResponseBodySubjectAlternativeNames& obj) { 
      DARABONBA_PTR_FROM_JSON(SubjectAlternativeName, subjectAlternativeName_);
    };
    UploadServerCertificateResponseBodySubjectAlternativeNames() = default ;
    UploadServerCertificateResponseBodySubjectAlternativeNames(const UploadServerCertificateResponseBodySubjectAlternativeNames &) = default ;
    UploadServerCertificateResponseBodySubjectAlternativeNames(UploadServerCertificateResponseBodySubjectAlternativeNames &&) = default ;
    UploadServerCertificateResponseBodySubjectAlternativeNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadServerCertificateResponseBodySubjectAlternativeNames() = default ;
    UploadServerCertificateResponseBodySubjectAlternativeNames& operator=(const UploadServerCertificateResponseBodySubjectAlternativeNames &) = default ;
    UploadServerCertificateResponseBodySubjectAlternativeNames& operator=(UploadServerCertificateResponseBodySubjectAlternativeNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subjectAlternativeName_ == nullptr; };
    // subjectAlternativeName Field Functions 
    bool hasSubjectAlternativeName() const { return this->subjectAlternativeName_ != nullptr;};
    void deleteSubjectAlternativeName() { this->subjectAlternativeName_ = nullptr;};
    inline const vector<string> & subjectAlternativeName() const { DARABONBA_PTR_GET_CONST(subjectAlternativeName_, vector<string>) };
    inline vector<string> subjectAlternativeName() { DARABONBA_PTR_GET(subjectAlternativeName_, vector<string>) };
    inline UploadServerCertificateResponseBodySubjectAlternativeNames& setSubjectAlternativeName(const vector<string> & subjectAlternativeName) { DARABONBA_PTR_SET_VALUE(subjectAlternativeName_, subjectAlternativeName) };
    inline UploadServerCertificateResponseBodySubjectAlternativeNames& setSubjectAlternativeName(vector<string> && subjectAlternativeName) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeName_, subjectAlternativeName) };


  protected:
    std::shared_ptr<vector<string>> subjectAlternativeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
