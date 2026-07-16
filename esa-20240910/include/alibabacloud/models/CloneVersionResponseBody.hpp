// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLONEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CloneVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloneVersion, cloneVersion_);
      DARABONBA_PTR_TO_JSON(OriginVersion, originVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloneVersion, cloneVersion_);
      DARABONBA_PTR_FROM_JSON(OriginVersion, originVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloneVersionResponseBody() = default ;
    CloneVersionResponseBody(const CloneVersionResponseBody &) = default ;
    CloneVersionResponseBody(CloneVersionResponseBody &&) = default ;
    CloneVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneVersionResponseBody() = default ;
    CloneVersionResponseBody& operator=(const CloneVersionResponseBody &) = default ;
    CloneVersionResponseBody& operator=(CloneVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloneVersion_ == nullptr
        && this->originVersion_ == nullptr && this->requestId_ == nullptr; };
    // cloneVersion Field Functions 
    bool hasCloneVersion() const { return this->cloneVersion_ != nullptr;};
    void deleteCloneVersion() { this->cloneVersion_ = nullptr;};
    inline int32_t getCloneVersion() const { DARABONBA_PTR_GET_DEFAULT(cloneVersion_, 0) };
    inline CloneVersionResponseBody& setCloneVersion(int32_t cloneVersion) { DARABONBA_PTR_SET_VALUE(cloneVersion_, cloneVersion) };


    // originVersion Field Functions 
    bool hasOriginVersion() const { return this->originVersion_ != nullptr;};
    void deleteOriginVersion() { this->originVersion_ = nullptr;};
    inline int32_t getOriginVersion() const { DARABONBA_PTR_GET_DEFAULT(originVersion_, 0) };
    inline CloneVersionResponseBody& setOriginVersion(int32_t originVersion) { DARABONBA_PTR_SET_VALUE(originVersion_, originVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloneVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The version number of the cloned version.
    shared_ptr<int32_t> cloneVersion_ {};
    // The version number that was cloned.
    shared_ptr<int32_t> originVersion_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
