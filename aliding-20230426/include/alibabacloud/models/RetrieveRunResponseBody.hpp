// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RetrieveRunResponseBodyRun.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class RetrieveRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(run, run_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(run, run_);
    };
    RetrieveRunResponseBody() = default ;
    RetrieveRunResponseBody(const RetrieveRunResponseBody &) = default ;
    RetrieveRunResponseBody(RetrieveRunResponseBody &&) = default ;
    RetrieveRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveRunResponseBody() = default ;
    RetrieveRunResponseBody& operator=(const RetrieveRunResponseBody &) = default ;
    RetrieveRunResponseBody& operator=(RetrieveRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->run_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetrieveRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // run Field Functions 
    bool hasRun() const { return this->run_ != nullptr;};
    void deleteRun() { this->run_ = nullptr;};
    inline const RetrieveRunResponseBodyRun & run() const { DARABONBA_PTR_GET_CONST(run_, RetrieveRunResponseBodyRun) };
    inline RetrieveRunResponseBodyRun run() { DARABONBA_PTR_GET(run_, RetrieveRunResponseBodyRun) };
    inline RetrieveRunResponseBody& setRun(const RetrieveRunResponseBodyRun & run) { DARABONBA_PTR_SET_VALUE(run_, run) };
    inline RetrieveRunResponseBody& setRun(RetrieveRunResponseBodyRun && run) { DARABONBA_PTR_SET_RVALUE(run_, run) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<RetrieveRunResponseBodyRun> run_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
