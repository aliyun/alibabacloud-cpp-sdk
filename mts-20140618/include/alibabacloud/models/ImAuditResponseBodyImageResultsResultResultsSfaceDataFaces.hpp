// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSSFACEDATAFACES_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSSFACEDATAFACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces& obj) { 
      DARABONBA_PTR_TO_JSON(idid, idid_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(re, re_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces& obj) { 
      DARABONBA_PTR_FROM_JSON(idid, idid_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(re, re_);
    };
    ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces() = default ;
    ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces(const ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces &) = default ;
    ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces(ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces &&) = default ;
    ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces() = default ;
    ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces& operator=(const ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces &) = default ;
    ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces& operator=(ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idid_ == nullptr
        && return this->name_ == nullptr && return this->re_ == nullptr; };
    // idid Field Functions 
    bool hasIdid() const { return this->idid_ != nullptr;};
    void deleteIdid() { this->idid_ = nullptr;};
    inline string idid() const { DARABONBA_PTR_GET_DEFAULT(idid_, "") };
    inline ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces& setIdid(string idid) { DARABONBA_PTR_SET_VALUE(idid_, idid) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // re Field Functions 
    bool hasRe() const { return this->re_ != nullptr;};
    void deleteRe() { this->re_ = nullptr;};
    inline float re() const { DARABONBA_PTR_GET_DEFAULT(re_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsSfaceDataFaces& setRe(float re) { DARABONBA_PTR_SET_VALUE(re_, re) };


  protected:
    // The ID of the detected face. The value is a string.
    std::shared_ptr<string> idid_ = nullptr;
    // This value is a string, which indicates the name of a similar person.
    std::shared_ptr<string> name_ = nullptr;
    // The score of the confidence level. The value is a float point number. Valid values: 0 to 100. A greater value indicates a higher confidence level for facial recognition.
    std::shared_ptr<float> re_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
