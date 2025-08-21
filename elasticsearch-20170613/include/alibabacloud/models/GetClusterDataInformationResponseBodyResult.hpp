// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERDATAINFORMATIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERDATAINFORMATIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterDataInformationResponseBodyResultMetaInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetClusterDataInformationResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterDataInformationResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(connectable, connectable_);
      DARABONBA_PTR_TO_JSON(metaInfo, metaInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterDataInformationResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(connectable, connectable_);
      DARABONBA_PTR_FROM_JSON(metaInfo, metaInfo_);
    };
    GetClusterDataInformationResponseBodyResult() = default ;
    GetClusterDataInformationResponseBodyResult(const GetClusterDataInformationResponseBodyResult &) = default ;
    GetClusterDataInformationResponseBodyResult(GetClusterDataInformationResponseBodyResult &&) = default ;
    GetClusterDataInformationResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterDataInformationResponseBodyResult() = default ;
    GetClusterDataInformationResponseBodyResult& operator=(const GetClusterDataInformationResponseBodyResult &) = default ;
    GetClusterDataInformationResponseBodyResult& operator=(GetClusterDataInformationResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectable_ != nullptr
        && this->metaInfo_ != nullptr; };
    // connectable Field Functions 
    bool hasConnectable() const { return this->connectable_ != nullptr;};
    void deleteConnectable() { this->connectable_ = nullptr;};
    inline bool connectable() const { DARABONBA_PTR_GET_DEFAULT(connectable_, false) };
    inline GetClusterDataInformationResponseBodyResult& setConnectable(bool connectable) { DARABONBA_PTR_SET_VALUE(connectable_, connectable) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline const Models::GetClusterDataInformationResponseBodyResultMetaInfo & metaInfo() const { DARABONBA_PTR_GET_CONST(metaInfo_, Models::GetClusterDataInformationResponseBodyResultMetaInfo) };
    inline Models::GetClusterDataInformationResponseBodyResultMetaInfo metaInfo() { DARABONBA_PTR_GET(metaInfo_, Models::GetClusterDataInformationResponseBodyResultMetaInfo) };
    inline GetClusterDataInformationResponseBodyResult& setMetaInfo(const Models::GetClusterDataInformationResponseBodyResultMetaInfo & metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };
    inline GetClusterDataInformationResponseBodyResult& setMetaInfo(Models::GetClusterDataInformationResponseBodyResultMetaInfo && metaInfo) { DARABONBA_PTR_SET_RVALUE(metaInfo_, metaInfo) };


  protected:
    // Whether it is connectable.
    std::shared_ptr<bool> connectable_ = nullptr;
    // The metadata of the cluster.
    std::shared_ptr<Models::GetClusterDataInformationResponseBodyResultMetaInfo> metaInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
