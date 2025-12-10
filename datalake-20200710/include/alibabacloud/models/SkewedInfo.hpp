// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKEWEDINFO_HPP_
#define ALIBABACLOUD_MODELS_SKEWEDINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SkewedInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkewedInfo& obj) { 
      DARABONBA_PTR_TO_JSON(SkewedColNames, skewedColNames_);
      DARABONBA_PTR_TO_JSON(SkewedColValueLocationMaps, skewedColValueLocationMaps_);
      DARABONBA_PTR_TO_JSON(SkewedColValues, skewedColValues_);
    };
    friend void from_json(const Darabonba::Json& j, SkewedInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(SkewedColNames, skewedColNames_);
      DARABONBA_PTR_FROM_JSON(SkewedColValueLocationMaps, skewedColValueLocationMaps_);
      DARABONBA_PTR_FROM_JSON(SkewedColValues, skewedColValues_);
    };
    SkewedInfo() = default ;
    SkewedInfo(const SkewedInfo &) = default ;
    SkewedInfo(SkewedInfo &&) = default ;
    SkewedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkewedInfo() = default ;
    SkewedInfo& operator=(const SkewedInfo &) = default ;
    SkewedInfo& operator=(SkewedInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skewedColNames_ == nullptr
        && return this->skewedColValueLocationMaps_ == nullptr && return this->skewedColValues_ == nullptr; };
    // skewedColNames Field Functions 
    bool hasSkewedColNames() const { return this->skewedColNames_ != nullptr;};
    void deleteSkewedColNames() { this->skewedColNames_ = nullptr;};
    inline const vector<string> & skewedColNames() const { DARABONBA_PTR_GET_CONST(skewedColNames_, vector<string>) };
    inline vector<string> skewedColNames() { DARABONBA_PTR_GET(skewedColNames_, vector<string>) };
    inline SkewedInfo& setSkewedColNames(const vector<string> & skewedColNames) { DARABONBA_PTR_SET_VALUE(skewedColNames_, skewedColNames) };
    inline SkewedInfo& setSkewedColNames(vector<string> && skewedColNames) { DARABONBA_PTR_SET_RVALUE(skewedColNames_, skewedColNames) };


    // skewedColValueLocationMaps Field Functions 
    bool hasSkewedColValueLocationMaps() const { return this->skewedColValueLocationMaps_ != nullptr;};
    void deleteSkewedColValueLocationMaps() { this->skewedColValueLocationMaps_ = nullptr;};
    inline const map<string, string> & skewedColValueLocationMaps() const { DARABONBA_PTR_GET_CONST(skewedColValueLocationMaps_, map<string, string>) };
    inline map<string, string> skewedColValueLocationMaps() { DARABONBA_PTR_GET(skewedColValueLocationMaps_, map<string, string>) };
    inline SkewedInfo& setSkewedColValueLocationMaps(const map<string, string> & skewedColValueLocationMaps) { DARABONBA_PTR_SET_VALUE(skewedColValueLocationMaps_, skewedColValueLocationMaps) };
    inline SkewedInfo& setSkewedColValueLocationMaps(map<string, string> && skewedColValueLocationMaps) { DARABONBA_PTR_SET_RVALUE(skewedColValueLocationMaps_, skewedColValueLocationMaps) };


    // skewedColValues Field Functions 
    bool hasSkewedColValues() const { return this->skewedColValues_ != nullptr;};
    void deleteSkewedColValues() { this->skewedColValues_ = nullptr;};
    inline const vector<vector<string>> & skewedColValues() const { DARABONBA_PTR_GET_CONST(skewedColValues_, vector<vector<string>>) };
    inline vector<vector<string>> skewedColValues() { DARABONBA_PTR_GET(skewedColValues_, vector<vector<string>>) };
    inline SkewedInfo& setSkewedColValues(const vector<vector<string>> & skewedColValues) { DARABONBA_PTR_SET_VALUE(skewedColValues_, skewedColValues) };
    inline SkewedInfo& setSkewedColValues(vector<vector<string>> && skewedColValues) { DARABONBA_PTR_SET_RVALUE(skewedColValues_, skewedColValues) };


  protected:
    std::shared_ptr<vector<string>> skewedColNames_ = nullptr;
    std::shared_ptr<map<string, string>> skewedColValueLocationMaps_ = nullptr;
    std::shared_ptr<vector<vector<string>>> skewedColValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
