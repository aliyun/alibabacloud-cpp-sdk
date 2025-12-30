// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetImageDetectionTaskResultHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDetectionTaskResultHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(X-Load-Test, xLoadTest_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDetectionTaskResultHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(X-Load-Test, xLoadTest_);
    };
    GetImageDetectionTaskResultHeaders() = default ;
    GetImageDetectionTaskResultHeaders(const GetImageDetectionTaskResultHeaders &) = default ;
    GetImageDetectionTaskResultHeaders(GetImageDetectionTaskResultHeaders &&) = default ;
    GetImageDetectionTaskResultHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDetectionTaskResultHeaders() = default ;
    GetImageDetectionTaskResultHeaders& operator=(const GetImageDetectionTaskResultHeaders &) = default ;
    GetImageDetectionTaskResultHeaders& operator=(GetImageDetectionTaskResultHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xLoadTest_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline GetImageDetectionTaskResultHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GetImageDetectionTaskResultHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xLoadTest Field Functions 
    bool hasXLoadTest() const { return this->xLoadTest_ != nullptr;};
    void deleteXLoadTest() { this->xLoadTest_ = nullptr;};
    inline bool getXLoadTest() const { DARABONBA_PTR_GET_DEFAULT(xLoadTest_, false) };
    inline GetImageDetectionTaskResultHeaders& setXLoadTest(bool xLoadTest) { DARABONBA_PTR_SET_VALUE(xLoadTest_, xLoadTest) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    shared_ptr<bool> xLoadTest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
