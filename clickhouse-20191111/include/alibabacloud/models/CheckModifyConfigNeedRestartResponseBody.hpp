// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMODIFYCONFIGNEEDRESTARTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKMODIFYCONFIGNEEDRESTARTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class CheckModifyConfigNeedRestartResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckModifyConfigNeedRestartResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NeedRestart, needRestart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckModifyConfigNeedRestartResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NeedRestart, needRestart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckModifyConfigNeedRestartResponseBody() = default ;
    CheckModifyConfigNeedRestartResponseBody(const CheckModifyConfigNeedRestartResponseBody &) = default ;
    CheckModifyConfigNeedRestartResponseBody(CheckModifyConfigNeedRestartResponseBody &&) = default ;
    CheckModifyConfigNeedRestartResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckModifyConfigNeedRestartResponseBody() = default ;
    CheckModifyConfigNeedRestartResponseBody& operator=(const CheckModifyConfigNeedRestartResponseBody &) = default ;
    CheckModifyConfigNeedRestartResponseBody& operator=(CheckModifyConfigNeedRestartResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->needRestart_ == nullptr
        && return this->requestId_ == nullptr; };
    // needRestart Field Functions 
    bool hasNeedRestart() const { return this->needRestart_ != nullptr;};
    void deleteNeedRestart() { this->needRestart_ = nullptr;};
    inline bool needRestart() const { DARABONBA_PTR_GET_DEFAULT(needRestart_, false) };
    inline CheckModifyConfigNeedRestartResponseBody& setNeedRestart(bool needRestart) { DARABONBA_PTR_SET_VALUE(needRestart_, needRestart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckModifyConfigNeedRestartResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the cluster was restarted after you modified the configuration parameters. Valid values:
    // 
    // *   **true**: The cluster was restarted.
    // *   **false**: The cluster was not restarted.
    std::shared_ptr<bool> needRestart_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
