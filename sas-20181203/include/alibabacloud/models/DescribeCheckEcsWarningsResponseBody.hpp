// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKECSWARNINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKECSWARNINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckEcsWarningsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckEcsWarningsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanTry, canTry_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SasVersion, sasVersion_);
      DARABONBA_PTR_TO_JSON(WeakPasswordCount, weakPasswordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckEcsWarningsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanTry, canTry_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SasVersion, sasVersion_);
      DARABONBA_PTR_FROM_JSON(WeakPasswordCount, weakPasswordCount_);
    };
    DescribeCheckEcsWarningsResponseBody() = default ;
    DescribeCheckEcsWarningsResponseBody(const DescribeCheckEcsWarningsResponseBody &) = default ;
    DescribeCheckEcsWarningsResponseBody(DescribeCheckEcsWarningsResponseBody &&) = default ;
    DescribeCheckEcsWarningsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckEcsWarningsResponseBody() = default ;
    DescribeCheckEcsWarningsResponseBody& operator=(const DescribeCheckEcsWarningsResponseBody &) = default ;
    DescribeCheckEcsWarningsResponseBody& operator=(DescribeCheckEcsWarningsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canTry_ == nullptr
        && this->requestId_ == nullptr && this->sasVersion_ == nullptr && this->weakPasswordCount_ == nullptr; };
    // canTry Field Functions 
    bool hasCanTry() const { return this->canTry_ != nullptr;};
    void deleteCanTry() { this->canTry_ = nullptr;};
    inline string getCanTry() const { DARABONBA_PTR_GET_DEFAULT(canTry_, "") };
    inline DescribeCheckEcsWarningsResponseBody& setCanTry(string canTry) { DARABONBA_PTR_SET_VALUE(canTry_, canTry) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckEcsWarningsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sasVersion Field Functions 
    bool hasSasVersion() const { return this->sasVersion_ != nullptr;};
    void deleteSasVersion() { this->sasVersion_ = nullptr;};
    inline string getSasVersion() const { DARABONBA_PTR_GET_DEFAULT(sasVersion_, "") };
    inline DescribeCheckEcsWarningsResponseBody& setSasVersion(string sasVersion) { DARABONBA_PTR_SET_VALUE(sasVersion_, sasVersion) };


    // weakPasswordCount Field Functions 
    bool hasWeakPasswordCount() const { return this->weakPasswordCount_ != nullptr;};
    void deleteWeakPasswordCount() { this->weakPasswordCount_ = nullptr;};
    inline string getWeakPasswordCount() const { DARABONBA_PTR_GET_DEFAULT(weakPasswordCount_, "") };
    inline DescribeCheckEcsWarningsResponseBody& setWeakPasswordCount(string weakPasswordCount) { DARABONBA_PTR_SET_VALUE(weakPasswordCount_, weakPasswordCount) };


  protected:
    // Indicates whether you use the free trial of Security Center. Valid values:
    // - **0**: no
    // - **1**: yes
    shared_ptr<string> canTry_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The edition of Security Center that you use. Valid values:
    // 
    // *   **1**: Basic edition
    // *   **2** or **3**: Enterprise edition
    // *   **5**: Advanced edition
    // *   **6**: Anti-virus edition
    // 
    // >  Both the value 2 and the value 3 indicate the Enterprise edition.
    shared_ptr<string> sasVersion_ {};
    // The number of weak passwords that can cause high risks to your assets.
    shared_ptr<string> weakPasswordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
