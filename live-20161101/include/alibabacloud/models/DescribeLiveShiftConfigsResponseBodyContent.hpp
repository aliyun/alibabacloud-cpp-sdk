// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESHIFTCONFIGSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESHIFTCONFIGSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveShiftConfigsResponseBodyContentConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveShiftConfigsResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveShiftConfigsResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveShiftConfigsResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
    };
    DescribeLiveShiftConfigsResponseBodyContent() = default ;
    DescribeLiveShiftConfigsResponseBodyContent(const DescribeLiveShiftConfigsResponseBodyContent &) = default ;
    DescribeLiveShiftConfigsResponseBodyContent(DescribeLiveShiftConfigsResponseBodyContent &&) = default ;
    DescribeLiveShiftConfigsResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveShiftConfigsResponseBodyContent() = default ;
    DescribeLiveShiftConfigsResponseBodyContent& operator=(const DescribeLiveShiftConfigsResponseBodyContent &) = default ;
    DescribeLiveShiftConfigsResponseBodyContent& operator=(DescribeLiveShiftConfigsResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const vector<Models::DescribeLiveShiftConfigsResponseBodyContentConfig> & config() const { DARABONBA_PTR_GET_CONST(config_, vector<Models::DescribeLiveShiftConfigsResponseBodyContentConfig>) };
    inline vector<Models::DescribeLiveShiftConfigsResponseBodyContentConfig> config() { DARABONBA_PTR_GET(config_, vector<Models::DescribeLiveShiftConfigsResponseBodyContentConfig>) };
    inline DescribeLiveShiftConfigsResponseBodyContent& setConfig(const vector<Models::DescribeLiveShiftConfigsResponseBodyContentConfig> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeLiveShiftConfigsResponseBodyContent& setConfig(vector<Models::DescribeLiveShiftConfigsResponseBodyContentConfig> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveShiftConfigsResponseBodyContentConfig>> config_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
