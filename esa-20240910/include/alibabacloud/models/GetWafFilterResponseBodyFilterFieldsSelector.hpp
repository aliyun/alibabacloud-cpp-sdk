// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODYFILTERFIELDSSELECTOR_HPP_
#define ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODYFILTERFIELDSSELECTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWafFilterResponseBodyFilterFieldsSelectorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafFilterResponseBodyFilterFieldsSelector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafFilterResponseBodyFilterFieldsSelector& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafFilterResponseBodyFilterFieldsSelector& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
    };
    GetWafFilterResponseBodyFilterFieldsSelector() = default ;
    GetWafFilterResponseBodyFilterFieldsSelector(const GetWafFilterResponseBodyFilterFieldsSelector &) = default ;
    GetWafFilterResponseBodyFilterFieldsSelector(GetWafFilterResponseBodyFilterFieldsSelector &&) = default ;
    GetWafFilterResponseBodyFilterFieldsSelector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafFilterResponseBodyFilterFieldsSelector() = default ;
    GetWafFilterResponseBodyFilterFieldsSelector& operator=(const GetWafFilterResponseBodyFilterFieldsSelector &) = default ;
    GetWafFilterResponseBodyFilterFieldsSelector& operator=(GetWafFilterResponseBodyFilterFieldsSelector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->kind_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::GetWafFilterResponseBodyFilterFieldsSelectorData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::GetWafFilterResponseBodyFilterFieldsSelectorData>) };
    inline vector<Models::GetWafFilterResponseBodyFilterFieldsSelectorData> data() { DARABONBA_PTR_GET(data_, vector<Models::GetWafFilterResponseBodyFilterFieldsSelectorData>) };
    inline GetWafFilterResponseBodyFilterFieldsSelector& setData(const vector<Models::GetWafFilterResponseBodyFilterFieldsSelectorData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWafFilterResponseBodyFilterFieldsSelector& setData(vector<Models::GetWafFilterResponseBodyFilterFieldsSelectorData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline GetWafFilterResponseBodyFilterFieldsSelector& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


  protected:
    // The data. This parameter is available only when the value of the Kind parameter is data.
    std::shared_ptr<vector<Models::GetWafFilterResponseBodyFilterFieldsSelectorData>> data_ = nullptr;
    // The type of selector. Valid values: data and others.
    std::shared_ptr<string> kind_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
