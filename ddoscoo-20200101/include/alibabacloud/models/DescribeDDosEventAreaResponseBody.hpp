// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTAREARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTAREARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Areas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Areas& obj) { 
        DARABONBA_PTR_TO_JSON(Area, area_);
        DARABONBA_PTR_TO_JSON(InPkts, inPkts_);
      };
      friend void from_json(const Darabonba::Json& j, Areas& obj) { 
        DARABONBA_PTR_FROM_JSON(Area, area_);
        DARABONBA_PTR_FROM_JSON(InPkts, inPkts_);
      };
      Areas() = default ;
      Areas(const Areas &) = default ;
      Areas(Areas &&) = default ;
      Areas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Areas() = default ;
      Areas& operator=(const Areas &) = default ;
      Areas& operator=(Areas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->area_ == nullptr
        && this->inPkts_ == nullptr; };
      // area Field Functions 
      bool hasArea() const { return this->area_ != nullptr;};
      void deleteArea() { this->area_ = nullptr;};
      inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
      inline Areas& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


      // inPkts Field Functions 
      bool hasInPkts() const { return this->inPkts_ != nullptr;};
      void deleteInPkts() { this->inPkts_ = nullptr;};
      inline int64_t getInPkts() const { DARABONBA_PTR_GET_DEFAULT(inPkts_, 0L) };
      inline Areas& setInPkts(int64_t inPkts) { DARABONBA_PTR_SET_VALUE(inPkts_, inPkts) };


    protected:
      // The code or ID of the source region. For more information, see [Codes of administrative regions in China and codes of countries and areas](https://help.aliyun.com/document_detail/167926.html). For example, **110000** indicates Beijing, China, and **us** indicates the United States.
      shared_ptr<string> area_ {};
      // The number of request packets that were sent from the source region.
      shared_ptr<int64_t> inPkts_ {};
    };

    virtual bool empty() const override { return this->areas_ == nullptr
        && this->requestId_ == nullptr; };
    // areas Field Functions 
    bool hasAreas() const { return this->areas_ != nullptr;};
    void deleteAreas() { this->areas_ = nullptr;};
    inline const vector<DescribeDDosEventAreaResponseBody::Areas> & getAreas() const { DARABONBA_PTR_GET_CONST(areas_, vector<DescribeDDosEventAreaResponseBody::Areas>) };
    inline vector<DescribeDDosEventAreaResponseBody::Areas> getAreas() { DARABONBA_PTR_GET(areas_, vector<DescribeDDosEventAreaResponseBody::Areas>) };
    inline DescribeDDosEventAreaResponseBody& setAreas(const vector<DescribeDDosEventAreaResponseBody::Areas> & areas) { DARABONBA_PTR_SET_VALUE(areas_, areas) };
    inline DescribeDDosEventAreaResponseBody& setAreas(vector<DescribeDDosEventAreaResponseBody::Areas> && areas) { DARABONBA_PTR_SET_RVALUE(areas_, areas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDosEventAreaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the source region from which the volumetric attack was initiated.
    shared_ptr<vector<DescribeDDosEventAreaResponseBody::Areas>> areas_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
