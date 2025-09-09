// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTRISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTRISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListArtifactRisksResponseBodyArtifactRiskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListArtifactRisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactRisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactRiskList, artifactRiskList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactRisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactRiskList, artifactRiskList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListArtifactRisksResponseBody() = default ;
    ListArtifactRisksResponseBody(const ListArtifactRisksResponseBody &) = default ;
    ListArtifactRisksResponseBody(ListArtifactRisksResponseBody &&) = default ;
    ListArtifactRisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactRisksResponseBody() = default ;
    ListArtifactRisksResponseBody& operator=(const ListArtifactRisksResponseBody &) = default ;
    ListArtifactRisksResponseBody& operator=(ListArtifactRisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactRiskList_ != nullptr
        && this->requestId_ != nullptr; };
    // artifactRiskList Field Functions 
    bool hasArtifactRiskList() const { return this->artifactRiskList_ != nullptr;};
    void deleteArtifactRiskList() { this->artifactRiskList_ = nullptr;};
    inline const vector<ListArtifactRisksResponseBodyArtifactRiskList> & artifactRiskList() const { DARABONBA_PTR_GET_CONST(artifactRiskList_, vector<ListArtifactRisksResponseBodyArtifactRiskList>) };
    inline vector<ListArtifactRisksResponseBodyArtifactRiskList> artifactRiskList() { DARABONBA_PTR_GET(artifactRiskList_, vector<ListArtifactRisksResponseBodyArtifactRiskList>) };
    inline ListArtifactRisksResponseBody& setArtifactRiskList(const vector<ListArtifactRisksResponseBodyArtifactRiskList> & artifactRiskList) { DARABONBA_PTR_SET_VALUE(artifactRiskList_, artifactRiskList) };
    inline ListArtifactRisksResponseBody& setArtifactRiskList(vector<ListArtifactRisksResponseBodyArtifactRiskList> && artifactRiskList) { DARABONBA_PTR_SET_RVALUE(artifactRiskList_, artifactRiskList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListArtifactRisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of artifact risks
    std::shared_ptr<vector<ListArtifactRisksResponseBodyArtifactRiskList>> artifactRiskList_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
