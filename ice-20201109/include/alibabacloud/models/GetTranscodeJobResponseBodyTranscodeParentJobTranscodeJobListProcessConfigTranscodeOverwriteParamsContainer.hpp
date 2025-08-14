// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIGTRANSCODEOVERWRITEPARAMSCONTAINER_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIGTRANSCODEOVERWRITEPARAMSCONTAINER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
    };
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer(const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer(GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer &&) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer& operator=(const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer& operator=(GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->format_ != nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


  protected:
    // The container format.
    std::shared_ptr<string> format_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
