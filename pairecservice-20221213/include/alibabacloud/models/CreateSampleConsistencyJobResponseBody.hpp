// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAMPLECONSISTENCYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESAMPLECONSISTENCYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateSampleConsistencyJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSampleConsistencyJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SampleConsistencyJobId, sampleConsistencyJobId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSampleConsistencyJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SampleConsistencyJobId, sampleConsistencyJobId_);
    };
    CreateSampleConsistencyJobResponseBody() = default ;
    CreateSampleConsistencyJobResponseBody(const CreateSampleConsistencyJobResponseBody &) = default ;
    CreateSampleConsistencyJobResponseBody(CreateSampleConsistencyJobResponseBody &&) = default ;
    CreateSampleConsistencyJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSampleConsistencyJobResponseBody() = default ;
    CreateSampleConsistencyJobResponseBody& operator=(const CreateSampleConsistencyJobResponseBody &) = default ;
    CreateSampleConsistencyJobResponseBody& operator=(CreateSampleConsistencyJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sampleConsistencyJobId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSampleConsistencyJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sampleConsistencyJobId Field Functions 
    bool hasSampleConsistencyJobId() const { return this->sampleConsistencyJobId_ != nullptr;};
    void deleteSampleConsistencyJobId() { this->sampleConsistencyJobId_ = nullptr;};
    inline string getSampleConsistencyJobId() const { DARABONBA_PTR_GET_DEFAULT(sampleConsistencyJobId_, "") };
    inline CreateSampleConsistencyJobResponseBody& setSampleConsistencyJobId(string sampleConsistencyJobId) { DARABONBA_PTR_SET_VALUE(sampleConsistencyJobId_, sampleConsistencyJobId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sampleConsistencyJobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
