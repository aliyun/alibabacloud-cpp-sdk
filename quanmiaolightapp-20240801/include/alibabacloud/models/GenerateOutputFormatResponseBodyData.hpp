// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEOUTPUTFORMATRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATEOUTPUTFORMATRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GenerateOutputFormatResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateOutputFormatResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(outputFormat, outputFormat_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateOutputFormatResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(outputFormat, outputFormat_);
    };
    GenerateOutputFormatResponseBodyData() = default ;
    GenerateOutputFormatResponseBodyData(const GenerateOutputFormatResponseBodyData &) = default ;
    GenerateOutputFormatResponseBodyData(GenerateOutputFormatResponseBodyData &&) = default ;
    GenerateOutputFormatResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateOutputFormatResponseBodyData() = default ;
    GenerateOutputFormatResponseBodyData& operator=(const GenerateOutputFormatResponseBodyData &) = default ;
    GenerateOutputFormatResponseBodyData& operator=(GenerateOutputFormatResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputFormat_ != nullptr; };
    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline GenerateOutputFormatResponseBodyData& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


  protected:
    std::shared_ptr<string> outputFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
