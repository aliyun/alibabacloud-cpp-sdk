// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPERATEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class OperateJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    OperateJobResponseBody() = default ;
    OperateJobResponseBody(const OperateJobResponseBody &) = default ;
    OperateJobResponseBody(OperateJobResponseBody &&) = default ;
    OperateJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateJobResponseBody() = default ;
    OperateJobResponseBody& operator=(const OperateJobResponseBody &) = default ;
    OperateJobResponseBody& operator=(OperateJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OperateJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
