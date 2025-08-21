// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIOUSANDNEXTCONTROLREQUESTOPENCONTROLPLAYINGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIOUSANDNEXTCONTROLREQUESTOPENCONTROLPLAYINGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PreviousAndNextControlRequestOpenControlPlayingListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviousAndNextControlRequestOpenControlPlayingListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cmd, cmd_);
      DARABONBA_ANY_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(IsFromDevice, isFromDevice_);
    };
    friend void from_json(const Darabonba::Json& j, PreviousAndNextControlRequestOpenControlPlayingListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cmd, cmd_);
      DARABONBA_ANY_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(IsFromDevice, isFromDevice_);
    };
    PreviousAndNextControlRequestOpenControlPlayingListRequest() = default ;
    PreviousAndNextControlRequestOpenControlPlayingListRequest(const PreviousAndNextControlRequestOpenControlPlayingListRequest &) = default ;
    PreviousAndNextControlRequestOpenControlPlayingListRequest(PreviousAndNextControlRequestOpenControlPlayingListRequest &&) = default ;
    PreviousAndNextControlRequestOpenControlPlayingListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviousAndNextControlRequestOpenControlPlayingListRequest() = default ;
    PreviousAndNextControlRequestOpenControlPlayingListRequest& operator=(const PreviousAndNextControlRequestOpenControlPlayingListRequest &) = default ;
    PreviousAndNextControlRequestOpenControlPlayingListRequest& operator=(PreviousAndNextControlRequestOpenControlPlayingListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cmd_ != nullptr
        && this->extendInfo_ != nullptr && this->isFromDevice_ != nullptr; };
    // cmd Field Functions 
    bool hasCmd() const { return this->cmd_ != nullptr;};
    void deleteCmd() { this->cmd_ = nullptr;};
    inline string cmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
    inline PreviousAndNextControlRequestOpenControlPlayingListRequest& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline     const Darabonba::Json & extendInfo() const { DARABONBA_GET(extendInfo_) };
    Darabonba::Json & extendInfo() { DARABONBA_GET(extendInfo_) };
    inline PreviousAndNextControlRequestOpenControlPlayingListRequest& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
    inline PreviousAndNextControlRequestOpenControlPlayingListRequest& setExtendInfo(Darabonba::Json & extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


    // isFromDevice Field Functions 
    bool hasIsFromDevice() const { return this->isFromDevice_ != nullptr;};
    void deleteIsFromDevice() { this->isFromDevice_ = nullptr;};
    inline bool isFromDevice() const { DARABONBA_PTR_GET_DEFAULT(isFromDevice_, false) };
    inline PreviousAndNextControlRequestOpenControlPlayingListRequest& setIsFromDevice(bool isFromDevice) { DARABONBA_PTR_SET_VALUE(isFromDevice_, isFromDevice) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cmd_ = nullptr;
    Darabonba::Json extendInfo_ = nullptr;
    std::shared_ptr<bool> isFromDevice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
