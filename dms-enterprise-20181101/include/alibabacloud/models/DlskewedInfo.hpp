// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLSKEWEDINFO_HPP_
#define ALIBABACLOUD_MODELS_DLSKEWEDINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DLSkewedInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DLSkewedInfo& obj) { 
      DARABONBA_PTR_TO_JSON(SkewedColNames, skewedColNames_);
      DARABONBA_ANY_TO_JSON(SkewedColValueLocationMaps, skewedColValueLocationMaps_);
      DARABONBA_PTR_TO_JSON(SkewedColValues, skewedColValues_);
    };
    friend void from_json(const Darabonba::Json& j, DLSkewedInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(SkewedColNames, skewedColNames_);
      DARABONBA_ANY_FROM_JSON(SkewedColValueLocationMaps, skewedColValueLocationMaps_);
      DARABONBA_PTR_FROM_JSON(SkewedColValues, skewedColValues_);
    };
    DLSkewedInfo() = default ;
    DLSkewedInfo(const DLSkewedInfo &) = default ;
    DLSkewedInfo(DLSkewedInfo &&) = default ;
    DLSkewedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DLSkewedInfo() = default ;
    DLSkewedInfo& operator=(const DLSkewedInfo &) = default ;
    DLSkewedInfo& operator=(DLSkewedInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->skewedColNames_ != nullptr
        && this->skewedColValueLocationMaps_ != nullptr && this->skewedColValues_ != nullptr; };
    // skewedColNames Field Functions 
    bool hasSkewedColNames() const { return this->skewedColNames_ != nullptr;};
    void deleteSkewedColNames() { this->skewedColNames_ = nullptr;};
    inline const vector<string> & skewedColNames() const { DARABONBA_PTR_GET_CONST(skewedColNames_, vector<string>) };
    inline vector<string> skewedColNames() { DARABONBA_PTR_GET(skewedColNames_, vector<string>) };
    inline DLSkewedInfo& setSkewedColNames(const vector<string> & skewedColNames) { DARABONBA_PTR_SET_VALUE(skewedColNames_, skewedColNames) };
    inline DLSkewedInfo& setSkewedColNames(vector<string> && skewedColNames) { DARABONBA_PTR_SET_RVALUE(skewedColNames_, skewedColNames) };


    // skewedColValueLocationMaps Field Functions 
    bool hasSkewedColValueLocationMaps() const { return this->skewedColValueLocationMaps_ != nullptr;};
    void deleteSkewedColValueLocationMaps() { this->skewedColValueLocationMaps_ = nullptr;};
    inline     const Darabonba::Json & skewedColValueLocationMaps() const { DARABONBA_GET(skewedColValueLocationMaps_) };
    Darabonba::Json & skewedColValueLocationMaps() { DARABONBA_GET(skewedColValueLocationMaps_) };
    inline DLSkewedInfo& setSkewedColValueLocationMaps(const Darabonba::Json & skewedColValueLocationMaps) { DARABONBA_SET_VALUE(skewedColValueLocationMaps_, skewedColValueLocationMaps) };
    inline DLSkewedInfo& setSkewedColValueLocationMaps(Darabonba::Json & skewedColValueLocationMaps) { DARABONBA_SET_RVALUE(skewedColValueLocationMaps_, skewedColValueLocationMaps) };


    // skewedColValues Field Functions 
    bool hasSkewedColValues() const { return this->skewedColValues_ != nullptr;};
    void deleteSkewedColValues() { this->skewedColValues_ = nullptr;};
    inline const vector<vector<string>> & skewedColValues() const { DARABONBA_PTR_GET_CONST(skewedColValues_, vector<vector<string>>) };
    inline vector<vector<string>> skewedColValues() { DARABONBA_PTR_GET(skewedColValues_, vector<vector<string>>) };
    inline DLSkewedInfo& setSkewedColValues(const vector<vector<string>> & skewedColValues) { DARABONBA_PTR_SET_VALUE(skewedColValues_, skewedColValues) };
    inline DLSkewedInfo& setSkewedColValues(vector<vector<string>> && skewedColValues) { DARABONBA_PTR_SET_RVALUE(skewedColValues_, skewedColValues) };


  protected:
    std::shared_ptr<vector<string>> skewedColNames_ = nullptr;
    Darabonba::Json skewedColValueLocationMaps_ = nullptr;
    std::shared_ptr<vector<vector<string>>> skewedColValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
