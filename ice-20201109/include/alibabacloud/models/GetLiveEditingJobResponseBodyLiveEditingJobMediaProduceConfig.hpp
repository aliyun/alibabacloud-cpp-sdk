// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODYLIVEEDITINGJOBMEDIAPRODUCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODYLIVEEDITINGJOBMEDIAPRODUCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig() = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig(const GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig &) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig(GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig &&) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig() = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig& operator=(const GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig &) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig& operator=(GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // The editing mode. Default value: Accurate.
    std::shared_ptr<string> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
