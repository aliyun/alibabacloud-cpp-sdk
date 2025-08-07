// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULESCOUNTLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRULESCOUNTLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRulesCountListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRulesCountListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, GetRulesCountListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    GetRulesCountListResponseBodyData() = default ;
    GetRulesCountListResponseBodyData(const GetRulesCountListResponseBodyData &) = default ;
    GetRulesCountListResponseBodyData(GetRulesCountListResponseBodyData &&) = default ;
    GetRulesCountListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRulesCountListResponseBodyData() = default ;
    GetRulesCountListResponseBodyData& operator=(const GetRulesCountListResponseBodyData &) = default ;
    GetRulesCountListResponseBodyData& operator=(GetRulesCountListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<string> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
    inline vector<string> data() { DARABONBA_PTR_GET(data_, vector<string>) };
    inline GetRulesCountListResponseBodyData& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRulesCountListResponseBodyData& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<string>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
