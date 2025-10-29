// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMERRORFLAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMERRORFLAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlagsErrorFlags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorFlags, errorFlags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorFlags, errorFlags_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorFlags_ == nullptr; };
    // errorFlags Field Functions 
    bool hasErrorFlags() const { return this->errorFlags_ != nullptr;};
    void deleteErrorFlags() { this->errorFlags_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlagsErrorFlags> & errorFlags() const { DARABONBA_PTR_GET_CONST(errorFlags_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlagsErrorFlags>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlagsErrorFlags> errorFlags() { DARABONBA_PTR_GET(errorFlags_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlagsErrorFlags>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags& setErrorFlags(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlagsErrorFlags> & errorFlags) { DARABONBA_PTR_SET_VALUE(errorFlags_, errorFlags) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags& setErrorFlags(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlagsErrorFlags> && errorFlags) { DARABONBA_PTR_SET_RVALUE(errorFlags_, errorFlags) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlagsErrorFlags>> errorFlags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
