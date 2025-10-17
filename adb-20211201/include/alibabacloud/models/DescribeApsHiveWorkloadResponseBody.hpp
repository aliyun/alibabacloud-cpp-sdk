// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSHIVEWORKLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSHIVEWORKLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApsHiveWorkloadResponseBodyApsWorkload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsHiveWorkloadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsHiveWorkloadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApsWorkload, apsWorkload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsHiveWorkloadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsWorkload, apsWorkload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApsHiveWorkloadResponseBody() = default ;
    DescribeApsHiveWorkloadResponseBody(const DescribeApsHiveWorkloadResponseBody &) = default ;
    DescribeApsHiveWorkloadResponseBody(DescribeApsHiveWorkloadResponseBody &&) = default ;
    DescribeApsHiveWorkloadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsHiveWorkloadResponseBody() = default ;
    DescribeApsHiveWorkloadResponseBody& operator=(const DescribeApsHiveWorkloadResponseBody &) = default ;
    DescribeApsHiveWorkloadResponseBody& operator=(DescribeApsHiveWorkloadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apsWorkload_ == nullptr
        && return this->requestId_ == nullptr; };
    // apsWorkload Field Functions 
    bool hasApsWorkload() const { return this->apsWorkload_ != nullptr;};
    void deleteApsWorkload() { this->apsWorkload_ = nullptr;};
    inline const DescribeApsHiveWorkloadResponseBodyApsWorkload & apsWorkload() const { DARABONBA_PTR_GET_CONST(apsWorkload_, DescribeApsHiveWorkloadResponseBodyApsWorkload) };
    inline DescribeApsHiveWorkloadResponseBodyApsWorkload apsWorkload() { DARABONBA_PTR_GET(apsWorkload_, DescribeApsHiveWorkloadResponseBodyApsWorkload) };
    inline DescribeApsHiveWorkloadResponseBody& setApsWorkload(const DescribeApsHiveWorkloadResponseBodyApsWorkload & apsWorkload) { DARABONBA_PTR_SET_VALUE(apsWorkload_, apsWorkload) };
    inline DescribeApsHiveWorkloadResponseBody& setApsWorkload(DescribeApsHiveWorkloadResponseBodyApsWorkload && apsWorkload) { DARABONBA_PTR_SET_RVALUE(apsWorkload_, apsWorkload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsHiveWorkloadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried job.
    std::shared_ptr<DescribeApsHiveWorkloadResponseBodyApsWorkload> apsWorkload_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
