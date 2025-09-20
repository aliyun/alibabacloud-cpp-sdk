// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGEBODIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGEBODIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Body.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectImageBodiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageBodiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bodies, bodies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageBodiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bodies, bodies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectImageBodiesResponseBody() = default ;
    DetectImageBodiesResponseBody(const DetectImageBodiesResponseBody &) = default ;
    DetectImageBodiesResponseBody(DetectImageBodiesResponseBody &&) = default ;
    DetectImageBodiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageBodiesResponseBody() = default ;
    DetectImageBodiesResponseBody& operator=(const DetectImageBodiesResponseBody &) = default ;
    DetectImageBodiesResponseBody& operator=(DetectImageBodiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bodies_ != nullptr
        && this->requestId_ != nullptr; };
    // bodies Field Functions 
    bool hasBodies() const { return this->bodies_ != nullptr;};
    void deleteBodies() { this->bodies_ = nullptr;};
    inline const vector<Body> & bodies() const { DARABONBA_PTR_GET_CONST(bodies_, vector<Body>) };
    inline vector<Body> bodies() { DARABONBA_PTR_GET(bodies_, vector<Body>) };
    inline DetectImageBodiesResponseBody& setBodies(const vector<Body> & bodies) { DARABONBA_PTR_SET_VALUE(bodies_, bodies) };
    inline DetectImageBodiesResponseBody& setBodies(vector<Body> && bodies) { DARABONBA_PTR_SET_RVALUE(bodies_, bodies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectImageBodiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The human bodies.
    std::shared_ptr<vector<Body>> bodies_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
