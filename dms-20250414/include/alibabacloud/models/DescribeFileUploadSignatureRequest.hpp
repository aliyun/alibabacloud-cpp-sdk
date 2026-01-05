// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEUPLOADSIGNATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEUPLOADSIGNATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeFileUploadSignatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileUploadSignatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallFrom, callFrom_);
      DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileUploadSignatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallFrom, callFrom_);
      DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
    };
    DescribeFileUploadSignatureRequest() = default ;
    DescribeFileUploadSignatureRequest(const DescribeFileUploadSignatureRequest &) = default ;
    DescribeFileUploadSignatureRequest(DescribeFileUploadSignatureRequest &&) = default ;
    DescribeFileUploadSignatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileUploadSignatureRequest() = default ;
    DescribeFileUploadSignatureRequest& operator=(const DescribeFileUploadSignatureRequest &) = default ;
    DescribeFileUploadSignatureRequest& operator=(DescribeFileUploadSignatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callFrom_ == nullptr
        && this->dmsUnit_ == nullptr; };
    // callFrom Field Functions 
    bool hasCallFrom() const { return this->callFrom_ != nullptr;};
    void deleteCallFrom() { this->callFrom_ = nullptr;};
    inline string getCallFrom() const { DARABONBA_PTR_GET_DEFAULT(callFrom_, "") };
    inline DescribeFileUploadSignatureRequest& setCallFrom(string callFrom) { DARABONBA_PTR_SET_VALUE(callFrom_, callFrom) };


    // dmsUnit Field Functions 
    bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
    void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
    inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
    inline DescribeFileUploadSignatureRequest& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


  protected:
    shared_ptr<string> callFrom_ {};
    shared_ptr<string> dmsUnit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
