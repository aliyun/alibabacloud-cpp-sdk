// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLRESPONSEBODYCASTERSTREAMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLRESPONSEBODYCASTERSTREAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterStreamUrlResponseBodyCasterStreams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterStreamUrlResponseBodyCasterStreams& obj) { 
      DARABONBA_PTR_TO_JSON(CasterStream, casterStream_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterStreamUrlResponseBodyCasterStreams& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterStream, casterStream_);
    };
    DescribeCasterStreamUrlResponseBodyCasterStreams() = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreams(const DescribeCasterStreamUrlResponseBodyCasterStreams &) = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreams(DescribeCasterStreamUrlResponseBodyCasterStreams &&) = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterStreamUrlResponseBodyCasterStreams() = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreams& operator=(const DescribeCasterStreamUrlResponseBodyCasterStreams &) = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreams& operator=(DescribeCasterStreamUrlResponseBodyCasterStreams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterStream_ == nullptr; };
    // casterStream Field Functions 
    bool hasCasterStream() const { return this->casterStream_ != nullptr;};
    void deleteCasterStream() { this->casterStream_ = nullptr;};
    inline const vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream> & casterStream() const { DARABONBA_PTR_GET_CONST(casterStream_, vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream>) };
    inline vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream> casterStream() { DARABONBA_PTR_GET(casterStream_, vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream>) };
    inline DescribeCasterStreamUrlResponseBodyCasterStreams& setCasterStream(const vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream> & casterStream) { DARABONBA_PTR_SET_VALUE(casterStream_, casterStream) };
    inline DescribeCasterStreamUrlResponseBodyCasterStreams& setCasterStream(vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream> && casterStream) { DARABONBA_PTR_SET_RVALUE(casterStream_, casterStream) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStream>> casterStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
