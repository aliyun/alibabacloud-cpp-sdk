// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WRITEFEATUREVIEWTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WRITEFEATUREVIEWTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
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
    class UrlDatasource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UrlDatasource& obj) { 
        DARABONBA_PTR_TO_JSON(Delimiter, delimiter_);
        DARABONBA_PTR_TO_JSON(OmitHeader, omitHeader_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, UrlDatasource& obj) { 
        DARABONBA_PTR_FROM_JSON(Delimiter, delimiter_);
        DARABONBA_PTR_FROM_JSON(OmitHeader, omitHeader_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      UrlDatasource() = default ;
      UrlDatasource(const UrlDatasource &) = default ;
      UrlDatasource(UrlDatasource &&) = default ;
      UrlDatasource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UrlDatasource() = default ;
      UrlDatasource& operator=(const UrlDatasource &) = default ;
      UrlDatasource& operator=(UrlDatasource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->delimiter_ == nullptr
        && this->omitHeader_ == nullptr && this->path_ == nullptr; };
      // delimiter Field Functions 
      bool hasDelimiter() const { return this->delimiter_ != nullptr;};
      void deleteDelimiter() { this->delimiter_ = nullptr;};
      inline string getDelimiter() const { DARABONBA_PTR_GET_DEFAULT(delimiter_, "") };
      inline UrlDatasource& setDelimiter(string delimiter) { DARABONBA_PTR_SET_VALUE(delimiter_, delimiter) };


      // omitHeader Field Functions 
      bool hasOmitHeader() const { return this->omitHeader_ != nullptr;};
      void deleteOmitHeader() { this->omitHeader_ = nullptr;};
      inline bool getOmitHeader() const { DARABONBA_PTR_GET_DEFAULT(omitHeader_, false) };
      inline UrlDatasource& setOmitHeader(bool omitHeader) { DARABONBA_PTR_SET_VALUE(omitHeader_, omitHeader) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline UrlDatasource& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      shared_ptr<string> delimiter_ {};
      shared_ptr<bool> omitHeader_ {};
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->mode_ == nullptr
        && this->partitions_ == nullptr && this->urlDatasource_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline WriteFeatureViewTableRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const map<string, Darabonba::Json> & getPartitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> getPartitions() { DARABONBA_PTR_GET(partitions_, map<string, Darabonba::Json>) };
    inline WriteFeatureViewTableRequest& setPartitions(const map<string, Darabonba::Json> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline WriteFeatureViewTableRequest& setPartitions(map<string, Darabonba::Json> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    // urlDatasource Field Functions 
    bool hasUrlDatasource() const { return this->urlDatasource_ != nullptr;};
    void deleteUrlDatasource() { this->urlDatasource_ = nullptr;};
    inline const WriteFeatureViewTableRequest::UrlDatasource & getUrlDatasource() const { DARABONBA_PTR_GET_CONST(urlDatasource_, WriteFeatureViewTableRequest::UrlDatasource) };
    inline WriteFeatureViewTableRequest::UrlDatasource getUrlDatasource() { DARABONBA_PTR_GET(urlDatasource_, WriteFeatureViewTableRequest::UrlDatasource) };
    inline WriteFeatureViewTableRequest& setUrlDatasource(const WriteFeatureViewTableRequest::UrlDatasource & urlDatasource) { DARABONBA_PTR_SET_VALUE(urlDatasource_, urlDatasource) };
    inline WriteFeatureViewTableRequest& setUrlDatasource(WriteFeatureViewTableRequest::UrlDatasource && urlDatasource) { DARABONBA_PTR_SET_RVALUE(urlDatasource_, urlDatasource) };


  protected:
    // This parameter is required.
    shared_ptr<string> mode_ {};
    shared_ptr<map<string, Darabonba::Json>> partitions_ {};
    shared_ptr<WriteFeatureViewTableRequest::UrlDatasource> urlDatasource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
