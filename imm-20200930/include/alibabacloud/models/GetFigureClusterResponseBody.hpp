// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFIGURECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFIGURECLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FigureCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetFigureClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFigureClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FigureCluster, figureCluster_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFigureClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FigureCluster, figureCluster_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFigureClusterResponseBody() = default ;
    GetFigureClusterResponseBody(const GetFigureClusterResponseBody &) = default ;
    GetFigureClusterResponseBody(GetFigureClusterResponseBody &&) = default ;
    GetFigureClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFigureClusterResponseBody() = default ;
    GetFigureClusterResponseBody& operator=(const GetFigureClusterResponseBody &) = default ;
    GetFigureClusterResponseBody& operator=(GetFigureClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->figureCluster_ == nullptr
        && this->requestId_ == nullptr; };
    // figureCluster Field Functions 
    bool hasFigureCluster() const { return this->figureCluster_ != nullptr;};
    void deleteFigureCluster() { this->figureCluster_ = nullptr;};
    inline const FigureCluster & getFigureCluster() const { DARABONBA_PTR_GET_CONST(figureCluster_, FigureCluster) };
    inline FigureCluster getFigureCluster() { DARABONBA_PTR_GET(figureCluster_, FigureCluster) };
    inline GetFigureClusterResponseBody& setFigureCluster(const FigureCluster & figureCluster) { DARABONBA_PTR_SET_VALUE(figureCluster_, figureCluster) };
    inline GetFigureClusterResponseBody& setFigureCluster(FigureCluster && figureCluster) { DARABONBA_PTR_SET_RVALUE(figureCluster_, figureCluster) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFigureClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the face cluster.
    shared_ptr<FigureCluster> figureCluster_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
