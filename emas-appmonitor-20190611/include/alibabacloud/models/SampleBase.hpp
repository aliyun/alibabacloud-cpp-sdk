// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAMPLEBASE_HPP_
#define ALIBABACLOUD_MODELS_SAMPLEBASE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FullSampleItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class SampleBase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SampleBase& obj) { 
      DARABONBA_PTR_TO_JSON(FullSampleDeviceIds, fullSampleDeviceIds_);
      DARABONBA_PTR_TO_JSON(FullSampleUsers, fullSampleUsers_);
      DARABONBA_PTR_TO_JSON(SampleMethod, sampleMethod_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
    };
    friend void from_json(const Darabonba::Json& j, SampleBase& obj) { 
      DARABONBA_PTR_FROM_JSON(FullSampleDeviceIds, fullSampleDeviceIds_);
      DARABONBA_PTR_FROM_JSON(FullSampleUsers, fullSampleUsers_);
      DARABONBA_PTR_FROM_JSON(SampleMethod, sampleMethod_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
    };
    SampleBase() = default ;
    SampleBase(const SampleBase &) = default ;
    SampleBase(SampleBase &&) = default ;
    SampleBase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SampleBase() = default ;
    SampleBase& operator=(const SampleBase &) = default ;
    SampleBase& operator=(SampleBase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fullSampleDeviceIds_ != nullptr
        && this->fullSampleUsers_ != nullptr && this->sampleMethod_ != nullptr && this->sampleRate_ != nullptr; };
    // fullSampleDeviceIds Field Functions 
    bool hasFullSampleDeviceIds() const { return this->fullSampleDeviceIds_ != nullptr;};
    void deleteFullSampleDeviceIds() { this->fullSampleDeviceIds_ = nullptr;};
    inline const vector<FullSampleItem> & fullSampleDeviceIds() const { DARABONBA_PTR_GET_CONST(fullSampleDeviceIds_, vector<FullSampleItem>) };
    inline vector<FullSampleItem> fullSampleDeviceIds() { DARABONBA_PTR_GET(fullSampleDeviceIds_, vector<FullSampleItem>) };
    inline SampleBase& setFullSampleDeviceIds(const vector<FullSampleItem> & fullSampleDeviceIds) { DARABONBA_PTR_SET_VALUE(fullSampleDeviceIds_, fullSampleDeviceIds) };
    inline SampleBase& setFullSampleDeviceIds(vector<FullSampleItem> && fullSampleDeviceIds) { DARABONBA_PTR_SET_RVALUE(fullSampleDeviceIds_, fullSampleDeviceIds) };


    // fullSampleUsers Field Functions 
    bool hasFullSampleUsers() const { return this->fullSampleUsers_ != nullptr;};
    void deleteFullSampleUsers() { this->fullSampleUsers_ = nullptr;};
    inline const vector<FullSampleItem> & fullSampleUsers() const { DARABONBA_PTR_GET_CONST(fullSampleUsers_, vector<FullSampleItem>) };
    inline vector<FullSampleItem> fullSampleUsers() { DARABONBA_PTR_GET(fullSampleUsers_, vector<FullSampleItem>) };
    inline SampleBase& setFullSampleUsers(const vector<FullSampleItem> & fullSampleUsers) { DARABONBA_PTR_SET_VALUE(fullSampleUsers_, fullSampleUsers) };
    inline SampleBase& setFullSampleUsers(vector<FullSampleItem> && fullSampleUsers) { DARABONBA_PTR_SET_RVALUE(fullSampleUsers_, fullSampleUsers) };


    // sampleMethod Field Functions 
    bool hasSampleMethod() const { return this->sampleMethod_ != nullptr;};
    void deleteSampleMethod() { this->sampleMethod_ = nullptr;};
    inline string sampleMethod() const { DARABONBA_PTR_GET_DEFAULT(sampleMethod_, "") };
    inline SampleBase& setSampleMethod(string sampleMethod) { DARABONBA_PTR_SET_VALUE(sampleMethod_, sampleMethod) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline float sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0.0) };
    inline SampleBase& setSampleRate(float sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


  protected:
    std::shared_ptr<vector<FullSampleItem>> fullSampleDeviceIds_ = nullptr;
    std::shared_ptr<vector<FullSampleItem>> fullSampleUsers_ = nullptr;
    std::shared_ptr<string> sampleMethod_ = nullptr;
    std::shared_ptr<float> sampleRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
