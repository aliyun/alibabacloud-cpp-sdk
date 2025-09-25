// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateDialogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDialogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(enableLibrary, enableLibrary_);
      DARABONBA_ANY_TO_JSON(metaData, metaData_);
      DARABONBA_PTR_TO_JSON(playCode, playCode_);
      DARABONBA_PTR_TO_JSON(qaLibraryList, qaLibraryList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(selfDirected, selfDirected_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDialogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(enableLibrary, enableLibrary_);
      DARABONBA_ANY_FROM_JSON(metaData, metaData_);
      DARABONBA_PTR_FROM_JSON(playCode, playCode_);
      DARABONBA_PTR_FROM_JSON(qaLibraryList, qaLibraryList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(selfDirected, selfDirected_);
    };
    CreateDialogRequest() = default ;
    CreateDialogRequest(const CreateDialogRequest &) = default ;
    CreateDialogRequest(CreateDialogRequest &&) = default ;
    CreateDialogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDialogRequest() = default ;
    CreateDialogRequest& operator=(const CreateDialogRequest &) = default ;
    CreateDialogRequest& operator=(CreateDialogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->enableLibrary_ != nullptr && this->metaData_ != nullptr && this->playCode_ != nullptr && this->qaLibraryList_ != nullptr && this->requestId_ != nullptr
        && this->selfDirected_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline CreateDialogRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // enableLibrary Field Functions 
    bool hasEnableLibrary() const { return this->enableLibrary_ != nullptr;};
    void deleteEnableLibrary() { this->enableLibrary_ = nullptr;};
    inline bool enableLibrary() const { DARABONBA_PTR_GET_DEFAULT(enableLibrary_, false) };
    inline CreateDialogRequest& setEnableLibrary(bool enableLibrary) { DARABONBA_PTR_SET_VALUE(enableLibrary_, enableLibrary) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline     const Darabonba::Json & metaData() const { DARABONBA_GET(metaData_) };
    Darabonba::Json & metaData() { DARABONBA_GET(metaData_) };
    inline CreateDialogRequest& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
    inline CreateDialogRequest& setMetaData(Darabonba::Json & metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


    // playCode Field Functions 
    bool hasPlayCode() const { return this->playCode_ != nullptr;};
    void deletePlayCode() { this->playCode_ = nullptr;};
    inline string playCode() const { DARABONBA_PTR_GET_DEFAULT(playCode_, "") };
    inline CreateDialogRequest& setPlayCode(string playCode) { DARABONBA_PTR_SET_VALUE(playCode_, playCode) };


    // qaLibraryList Field Functions 
    bool hasQaLibraryList() const { return this->qaLibraryList_ != nullptr;};
    void deleteQaLibraryList() { this->qaLibraryList_ = nullptr;};
    inline const vector<string> & qaLibraryList() const { DARABONBA_PTR_GET_CONST(qaLibraryList_, vector<string>) };
    inline vector<string> qaLibraryList() { DARABONBA_PTR_GET(qaLibraryList_, vector<string>) };
    inline CreateDialogRequest& setQaLibraryList(const vector<string> & qaLibraryList) { DARABONBA_PTR_SET_VALUE(qaLibraryList_, qaLibraryList) };
    inline CreateDialogRequest& setQaLibraryList(vector<string> && qaLibraryList) { DARABONBA_PTR_SET_RVALUE(qaLibraryList_, qaLibraryList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDialogRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // selfDirected Field Functions 
    bool hasSelfDirected() const { return this->selfDirected_ != nullptr;};
    void deleteSelfDirected() { this->selfDirected_ = nullptr;};
    inline bool selfDirected() const { DARABONBA_PTR_GET_DEFAULT(selfDirected_, false) };
    inline CreateDialogRequest& setSelfDirected(bool selfDirected) { DARABONBA_PTR_SET_VALUE(selfDirected_, selfDirected) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<bool> enableLibrary_ = nullptr;
    Darabonba::Json metaData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> playCode_ = nullptr;
    std::shared_ptr<vector<string>> qaLibraryList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> selfDirected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
