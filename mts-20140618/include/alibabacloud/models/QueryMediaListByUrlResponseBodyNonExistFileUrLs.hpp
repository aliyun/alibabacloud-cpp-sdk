// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYNONEXISTFILEURLS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYNONEXISTFILEURLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBodyNonExistFileURLs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBodyNonExistFileURLs& obj) { 
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBodyNonExistFileURLs& obj) { 
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
    };
    QueryMediaListByURLResponseBodyNonExistFileURLs() = default ;
    QueryMediaListByURLResponseBodyNonExistFileURLs(const QueryMediaListByURLResponseBodyNonExistFileURLs &) = default ;
    QueryMediaListByURLResponseBodyNonExistFileURLs(QueryMediaListByURLResponseBodyNonExistFileURLs &&) = default ;
    QueryMediaListByURLResponseBodyNonExistFileURLs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBodyNonExistFileURLs() = default ;
    QueryMediaListByURLResponseBodyNonExistFileURLs& operator=(const QueryMediaListByURLResponseBodyNonExistFileURLs &) = default ;
    QueryMediaListByURLResponseBodyNonExistFileURLs& operator=(QueryMediaListByURLResponseBodyNonExistFileURLs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileURL_ == nullptr; };
    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline const vector<string> & fileURL() const { DARABONBA_PTR_GET_CONST(fileURL_, vector<string>) };
    inline vector<string> fileURL() { DARABONBA_PTR_GET(fileURL_, vector<string>) };
    inline QueryMediaListByURLResponseBodyNonExistFileURLs& setFileURL(const vector<string> & fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };
    inline QueryMediaListByURLResponseBodyNonExistFileURLs& setFileURL(vector<string> && fileURL) { DARABONBA_PTR_SET_RVALUE(fileURL_, fileURL) };


  protected:
    std::shared_ptr<vector<string>> fileURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
