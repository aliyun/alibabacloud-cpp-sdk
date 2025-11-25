// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTAREARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTAREARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDDosEventAreaResponseBodyAreas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventAreaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventAreaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Areas, areas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventAreaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Areas, areas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDDosEventAreaResponseBody() = default ;
    DescribeDDosEventAreaResponseBody(const DescribeDDosEventAreaResponseBody &) = default ;
    DescribeDDosEventAreaResponseBody(DescribeDDosEventAreaResponseBody &&) = default ;
    DescribeDDosEventAreaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventAreaResponseBody() = default ;
    DescribeDDosEventAreaResponseBody& operator=(const DescribeDDosEventAreaResponseBody &) = default ;
    DescribeDDosEventAreaResponseBody& operator=(DescribeDDosEventAreaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areas_ == nullptr
        && return this->requestId_ == nullptr; };
    // areas Field Functions 
    bool hasAreas() const { return this->areas_ != nullptr;};
    void deleteAreas() { this->areas_ = nullptr;};
    inline const vector<DescribeDDosEventAreaResponseBodyAreas> & areas() const { DARABONBA_PTR_GET_CONST(areas_, vector<DescribeDDosEventAreaResponseBodyAreas>) };
    inline vector<DescribeDDosEventAreaResponseBodyAreas> areas() { DARABONBA_PTR_GET(areas_, vector<DescribeDDosEventAreaResponseBodyAreas>) };
    inline DescribeDDosEventAreaResponseBody& setAreas(const vector<DescribeDDosEventAreaResponseBodyAreas> & areas) { DARABONBA_PTR_SET_VALUE(areas_, areas) };
    inline DescribeDDosEventAreaResponseBody& setAreas(vector<DescribeDDosEventAreaResponseBodyAreas> && areas) { DARABONBA_PTR_SET_RVALUE(areas_, areas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDosEventAreaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the source region from which the volumetric attack was initiated.
    std::shared_ptr<vector<DescribeDDosEventAreaResponseBodyAreas>> areas_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
