// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOCREATIONTASKRESULTHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOCREATIONTASKRESULTHEADERS_HPP_
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
  class GetVideoCreationTaskResultHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoCreationTaskResultHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(X-Load-Test, xLoadTest_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoCreationTaskResultHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(X-Load-Test, xLoadTest_);
    };
    GetVideoCreationTaskResultHeaders() = default ;
    GetVideoCreationTaskResultHeaders(const GetVideoCreationTaskResultHeaders &) = default ;
    GetVideoCreationTaskResultHeaders(GetVideoCreationTaskResultHeaders &&) = default ;
    GetVideoCreationTaskResultHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoCreationTaskResultHeaders() = default ;
    GetVideoCreationTaskResultHeaders& operator=(const GetVideoCreationTaskResultHeaders &) = default ;
    GetVideoCreationTaskResultHeaders& operator=(GetVideoCreationTaskResultHeaders &&) = default ;
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
    inline GetVideoCreationTaskResultHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GetVideoCreationTaskResultHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xLoadTest Field Functions 
    bool hasXLoadTest() const { return this->xLoadTest_ != nullptr;};
    void deleteXLoadTest() { this->xLoadTest_ = nullptr;};
    inline bool getXLoadTest() const { DARABONBA_PTR_GET_DEFAULT(xLoadTest_, false) };
    inline GetVideoCreationTaskResultHeaders& setXLoadTest(bool xLoadTest) { DARABONBA_PTR_SET_VALUE(xLoadTest_, xLoadTest) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    shared_ptr<bool> xLoadTest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
