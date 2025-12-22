// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODYDATADETECTIONRESULTDETECTIONDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODYDATADETECTIONRESULTDETECTIONDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(confidence, confidence_);
      DARABONBA_PTR_TO_JSON(pass, pass_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(pass, pass_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails() = default ;
    GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails(const GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails &) = default ;
    GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails(GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails &&) = default ;
    GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails() = default ;
    GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails& operator=(const GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails &) = default ;
    GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails& operator=(GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->confidence_ == nullptr && return this->pass_ == nullptr && return this->reason_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline double confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails& setConfidence(double confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // pass Field Functions 
    bool hasPass() const { return this->pass_ != nullptr;};
    void deletePass() { this->pass_ = nullptr;};
    inline bool pass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
    inline GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetImageDetectionTaskResultResponseBodyDataDetectionResultDetectionDetails& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<double> confidence_ = nullptr;
    std::shared_ptr<bool> pass_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
