// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOBJECTSCANEVENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOBJECTSCANEVENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetObjectScanEventResponseBodyDataDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetObjectScanEventResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetObjectScanEventResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
    };
    friend void from_json(const Darabonba::Json& j, GetObjectScanEventResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
    };
    GetObjectScanEventResponseBodyData() = default ;
    GetObjectScanEventResponseBodyData(const GetObjectScanEventResponseBodyData &) = default ;
    GetObjectScanEventResponseBodyData(GetObjectScanEventResponseBodyData &&) = default ;
    GetObjectScanEventResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetObjectScanEventResponseBodyData() = default ;
    GetObjectScanEventResponseBodyData& operator=(const GetObjectScanEventResponseBodyData &) = default ;
    GetObjectScanEventResponseBodyData& operator=(GetObjectScanEventResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->details_ != nullptr
        && this->eventName_ != nullptr && this->fileName_ != nullptr && this->md5_ != nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::GetObjectScanEventResponseBodyDataDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::GetObjectScanEventResponseBodyDataDetails>) };
    inline vector<Models::GetObjectScanEventResponseBodyDataDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::GetObjectScanEventResponseBodyDataDetails>) };
    inline GetObjectScanEventResponseBodyData& setDetails(const vector<Models::GetObjectScanEventResponseBodyDataDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline GetObjectScanEventResponseBodyData& setDetails(vector<Models::GetObjectScanEventResponseBodyDataDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline GetObjectScanEventResponseBodyData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetObjectScanEventResponseBodyData& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline GetObjectScanEventResponseBodyData& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


  protected:
    // The details of the alert event.
    std::shared_ptr<vector<Models::GetObjectScanEventResponseBodyDataDetails>> details_ = nullptr;
    // The name of the alert item.
    std::shared_ptr<string> eventName_ = nullptr;
    // The name of the object.
    std::shared_ptr<string> fileName_ = nullptr;
    // The MD5 hash value of the object.
    std::shared_ptr<string> md5_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
