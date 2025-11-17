// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WRITEFEATUREVIEWTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WRITEFEATUREVIEWTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/WriteFeatureViewTableRequestUrlDatasource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class WriteFeatureViewTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WriteFeatureViewTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Partitions, partitions_);
      DARABONBA_PTR_TO_JSON(UrlDatasource, urlDatasource_);
    };
    friend void from_json(const Darabonba::Json& j, WriteFeatureViewTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(UrlDatasource, urlDatasource_);
    };
    WriteFeatureViewTableRequest() = default ;
    WriteFeatureViewTableRequest(const WriteFeatureViewTableRequest &) = default ;
    WriteFeatureViewTableRequest(WriteFeatureViewTableRequest &&) = default ;
    WriteFeatureViewTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WriteFeatureViewTableRequest() = default ;
    WriteFeatureViewTableRequest& operator=(const WriteFeatureViewTableRequest &) = default ;
    WriteFeatureViewTableRequest& operator=(WriteFeatureViewTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->partitions_ == nullptr && return this->urlDatasource_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline WriteFeatureViewTableRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const map<string, Darabonba::Json> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> partitions() { DARABONBA_PTR_GET(partitions_, map<string, Darabonba::Json>) };
    inline WriteFeatureViewTableRequest& setPartitions(const map<string, Darabonba::Json> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline WriteFeatureViewTableRequest& setPartitions(map<string, Darabonba::Json> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    // urlDatasource Field Functions 
    bool hasUrlDatasource() const { return this->urlDatasource_ != nullptr;};
    void deleteUrlDatasource() { this->urlDatasource_ = nullptr;};
    inline const WriteFeatureViewTableRequestUrlDatasource & urlDatasource() const { DARABONBA_PTR_GET_CONST(urlDatasource_, WriteFeatureViewTableRequestUrlDatasource) };
    inline WriteFeatureViewTableRequestUrlDatasource urlDatasource() { DARABONBA_PTR_GET(urlDatasource_, WriteFeatureViewTableRequestUrlDatasource) };
    inline WriteFeatureViewTableRequest& setUrlDatasource(const WriteFeatureViewTableRequestUrlDatasource & urlDatasource) { DARABONBA_PTR_SET_VALUE(urlDatasource_, urlDatasource) };
    inline WriteFeatureViewTableRequest& setUrlDatasource(WriteFeatureViewTableRequestUrlDatasource && urlDatasource) { DARABONBA_PTR_SET_RVALUE(urlDatasource_, urlDatasource) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<map<string, Darabonba::Json>> partitions_ = nullptr;
    std::shared_ptr<WriteFeatureViewTableRequestUrlDatasource> urlDatasource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
