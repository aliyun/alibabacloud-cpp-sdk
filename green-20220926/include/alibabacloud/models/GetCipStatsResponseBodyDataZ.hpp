// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCIPSTATSRESPONSEBODYDATAZ_HPP_
#define ALIBABACLOUD_MODELS_GETCIPSTATSRESPONSEBODYDATAZ_HPP_
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
  class GetCipStatsResponseBodyDataZ : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCipStatsResponseBodyDataZ& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetCipStatsResponseBodyDataZ& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetCipStatsResponseBodyDataZ() = default ;
    GetCipStatsResponseBodyDataZ(const GetCipStatsResponseBodyDataZ &) = default ;
    GetCipStatsResponseBodyDataZ(GetCipStatsResponseBodyDataZ &&) = default ;
    GetCipStatsResponseBodyDataZ(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCipStatsResponseBodyDataZ() = default ;
    GetCipStatsResponseBodyDataZ& operator=(const GetCipStatsResponseBodyDataZ &) = default ;
    GetCipStatsResponseBodyDataZ& operator=(GetCipStatsResponseBodyDataZ &&) = default ;
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
    inline GetCipStatsResponseBodyDataZ& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCipStatsResponseBodyDataZ& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetCipStatsResponseBodyDataZ& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<int64_t>> data_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
