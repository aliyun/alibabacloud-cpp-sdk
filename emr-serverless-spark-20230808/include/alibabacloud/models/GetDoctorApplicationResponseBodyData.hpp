// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetDoctorApplicationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(suggestions, suggestions_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(suggestions, suggestions_);
    };
    GetDoctorApplicationResponseBodyData() = default ;
    GetDoctorApplicationResponseBodyData(const GetDoctorApplicationResponseBodyData &) = default ;
    GetDoctorApplicationResponseBodyData(GetDoctorApplicationResponseBodyData &&) = default ;
    GetDoctorApplicationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorApplicationResponseBodyData() = default ;
    GetDoctorApplicationResponseBodyData& operator=(const GetDoctorApplicationResponseBodyData &) = default ;
    GetDoctorApplicationResponseBodyData& operator=(GetDoctorApplicationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->suggestions_ != nullptr; };
    // suggestions Field Functions 
    bool hasSuggestions() const { return this->suggestions_ != nullptr;};
    void deleteSuggestions() { this->suggestions_ = nullptr;};
    inline const vector<string> & suggestions() const { DARABONBA_PTR_GET_CONST(suggestions_, vector<string>) };
    inline vector<string> suggestions() { DARABONBA_PTR_GET(suggestions_, vector<string>) };
    inline GetDoctorApplicationResponseBodyData& setSuggestions(const vector<string> & suggestions) { DARABONBA_PTR_SET_VALUE(suggestions_, suggestions) };
    inline GetDoctorApplicationResponseBodyData& setSuggestions(vector<string> && suggestions) { DARABONBA_PTR_SET_RVALUE(suggestions_, suggestions) };


  protected:
    // The diagnostics list.
    std::shared_ptr<vector<string>> suggestions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
