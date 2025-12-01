// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDETAILBYIDRESPONSEBODYDATAVULDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETDETAILBYIDRESPONSEBODYDATAVULDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetDetailByIdResponseBodyDataVulDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDetailByIdResponseBodyDataVulDetails& obj) { 
      DARABONBA_PTR_TO_JSON(CveId, cveId_);
      DARABONBA_PTR_TO_JSON(CvssScore, cvssScore_);
      DARABONBA_PTR_TO_JSON(FixSuggestion, fixSuggestion_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetDetailByIdResponseBodyDataVulDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(CveId, cveId_);
      DARABONBA_PTR_FROM_JSON(CvssScore, cvssScore_);
      DARABONBA_PTR_FROM_JSON(FixSuggestion, fixSuggestion_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetDetailByIdResponseBodyDataVulDetails() = default ;
    GetDetailByIdResponseBodyDataVulDetails(const GetDetailByIdResponseBodyDataVulDetails &) = default ;
    GetDetailByIdResponseBodyDataVulDetails(GetDetailByIdResponseBodyDataVulDetails &&) = default ;
    GetDetailByIdResponseBodyDataVulDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDetailByIdResponseBodyDataVulDetails() = default ;
    GetDetailByIdResponseBodyDataVulDetails& operator=(const GetDetailByIdResponseBodyDataVulDetails &) = default ;
    GetDetailByIdResponseBodyDataVulDetails& operator=(GetDetailByIdResponseBodyDataVulDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cveId_ == nullptr
        && return this->cvssScore_ == nullptr && return this->fixSuggestion_ == nullptr && return this->title_ == nullptr; };
    // cveId Field Functions 
    bool hasCveId() const { return this->cveId_ != nullptr;};
    void deleteCveId() { this->cveId_ = nullptr;};
    inline string cveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
    inline GetDetailByIdResponseBodyDataVulDetails& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


    // cvssScore Field Functions 
    bool hasCvssScore() const { return this->cvssScore_ != nullptr;};
    void deleteCvssScore() { this->cvssScore_ = nullptr;};
    inline string cvssScore() const { DARABONBA_PTR_GET_DEFAULT(cvssScore_, "") };
    inline GetDetailByIdResponseBodyDataVulDetails& setCvssScore(string cvssScore) { DARABONBA_PTR_SET_VALUE(cvssScore_, cvssScore) };


    // fixSuggestion Field Functions 
    bool hasFixSuggestion() const { return this->fixSuggestion_ != nullptr;};
    void deleteFixSuggestion() { this->fixSuggestion_ = nullptr;};
    inline string fixSuggestion() const { DARABONBA_PTR_GET_DEFAULT(fixSuggestion_, "") };
    inline GetDetailByIdResponseBodyDataVulDetails& setFixSuggestion(string fixSuggestion) { DARABONBA_PTR_SET_VALUE(fixSuggestion_, fixSuggestion) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetDetailByIdResponseBodyDataVulDetails& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // CVE ID.
    std::shared_ptr<string> cveId_ = nullptr;
    // The CVSS score of the vulnerability in the Alibaba Cloud vulnerability database.
    std::shared_ptr<string> cvssScore_ = nullptr;
    // Fix suggestion.
    std::shared_ptr<string> fixSuggestion_ = nullptr;
    // Title of the vulnerability announcement.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
