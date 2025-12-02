// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKSTATRESPONSEBODYBARCHARTY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKSTATRESPONSEBODYBARCHARTY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckStatResponseBodyBarChartY : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckStatResponseBodyBarChartY& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckStatResponseBodyBarChartY& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetOssCheckStatResponseBodyBarChartY() = default ;
    GetOssCheckStatResponseBodyBarChartY(const GetOssCheckStatResponseBodyBarChartY &) = default ;
    GetOssCheckStatResponseBodyBarChartY(GetOssCheckStatResponseBodyBarChartY &&) = default ;
    GetOssCheckStatResponseBodyBarChartY(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckStatResponseBodyBarChartY() = default ;
    GetOssCheckStatResponseBodyBarChartY& operator=(const GetOssCheckStatResponseBodyBarChartY &) = default ;
    GetOssCheckStatResponseBodyBarChartY& operator=(GetOssCheckStatResponseBodyBarChartY &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->name_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<int64_t> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
    inline vector<int64_t> data() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
    inline GetOssCheckStatResponseBodyBarChartY& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetOssCheckStatResponseBodyBarChartY& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetOssCheckStatResponseBodyBarChartY& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Data.
    std::shared_ptr<vector<int64_t>> data_ = nullptr;
    // Name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
