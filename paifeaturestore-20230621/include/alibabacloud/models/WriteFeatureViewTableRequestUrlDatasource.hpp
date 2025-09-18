// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WRITEFEATUREVIEWTABLEREQUESTURLDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_WRITEFEATUREVIEWTABLEREQUESTURLDATASOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class WriteFeatureViewTableRequestUrlDatasource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WriteFeatureViewTableRequestUrlDatasource& obj) { 
      DARABONBA_PTR_TO_JSON(Delimiter, delimiter_);
      DARABONBA_PTR_TO_JSON(OmitHeader, omitHeader_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, WriteFeatureViewTableRequestUrlDatasource& obj) { 
      DARABONBA_PTR_FROM_JSON(Delimiter, delimiter_);
      DARABONBA_PTR_FROM_JSON(OmitHeader, omitHeader_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    WriteFeatureViewTableRequestUrlDatasource() = default ;
    WriteFeatureViewTableRequestUrlDatasource(const WriteFeatureViewTableRequestUrlDatasource &) = default ;
    WriteFeatureViewTableRequestUrlDatasource(WriteFeatureViewTableRequestUrlDatasource &&) = default ;
    WriteFeatureViewTableRequestUrlDatasource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WriteFeatureViewTableRequestUrlDatasource() = default ;
    WriteFeatureViewTableRequestUrlDatasource& operator=(const WriteFeatureViewTableRequestUrlDatasource &) = default ;
    WriteFeatureViewTableRequestUrlDatasource& operator=(WriteFeatureViewTableRequestUrlDatasource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delimiter_ != nullptr
        && this->omitHeader_ != nullptr && this->path_ != nullptr; };
    // delimiter Field Functions 
    bool hasDelimiter() const { return this->delimiter_ != nullptr;};
    void deleteDelimiter() { this->delimiter_ = nullptr;};
    inline string delimiter() const { DARABONBA_PTR_GET_DEFAULT(delimiter_, "") };
    inline WriteFeatureViewTableRequestUrlDatasource& setDelimiter(string delimiter) { DARABONBA_PTR_SET_VALUE(delimiter_, delimiter) };


    // omitHeader Field Functions 
    bool hasOmitHeader() const { return this->omitHeader_ != nullptr;};
    void deleteOmitHeader() { this->omitHeader_ = nullptr;};
    inline bool omitHeader() const { DARABONBA_PTR_GET_DEFAULT(omitHeader_, false) };
    inline WriteFeatureViewTableRequestUrlDatasource& setOmitHeader(bool omitHeader) { DARABONBA_PTR_SET_VALUE(omitHeader_, omitHeader) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline WriteFeatureViewTableRequestUrlDatasource& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    std::shared_ptr<string> delimiter_ = nullptr;
    std::shared_ptr<bool> omitHeader_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
