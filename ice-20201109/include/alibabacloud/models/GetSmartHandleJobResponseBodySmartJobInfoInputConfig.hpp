// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTHANDLEJOBRESPONSEBODYSMARTJOBINFOINPUTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTHANDLEJOBRESPONSEBODYSMARTJOBINFOINPUTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSmartHandleJobResponseBodySmartJobInfoInputConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartHandleJobResponseBodySmartJobInfoInputConfig& obj) { 
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartHandleJobResponseBodySmartJobInfoInputConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
    };
    GetSmartHandleJobResponseBodySmartJobInfoInputConfig() = default ;
    GetSmartHandleJobResponseBodySmartJobInfoInputConfig(const GetSmartHandleJobResponseBodySmartJobInfoInputConfig &) = default ;
    GetSmartHandleJobResponseBodySmartJobInfoInputConfig(GetSmartHandleJobResponseBodySmartJobInfoInputConfig &&) = default ;
    GetSmartHandleJobResponseBodySmartJobInfoInputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartHandleJobResponseBodySmartJobInfoInputConfig() = default ;
    GetSmartHandleJobResponseBodySmartJobInfoInputConfig& operator=(const GetSmartHandleJobResponseBodySmartJobInfoInputConfig &) = default ;
    GetSmartHandleJobResponseBodySmartJobInfoInputConfig& operator=(GetSmartHandleJobResponseBodySmartJobInfoInputConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputFile_ == nullptr; };
    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline string inputFile() const { DARABONBA_PTR_GET_DEFAULT(inputFile_, "") };
    inline GetSmartHandleJobResponseBodySmartJobInfoInputConfig& setInputFile(string inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };


  protected:
    // The OSS URL or the ID of the material in the media asset library.
    std::shared_ptr<string> inputFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
