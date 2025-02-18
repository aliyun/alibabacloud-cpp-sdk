// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IQS20241111_H_
#define ALIBABACLOUD_IQS20241111_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_IQS20241111 {
class AISearchQuery : public Darabonba::Model {
public:
  shared_ptr<string> card{};
  shared_ptr<string> cardQuery{};
  shared_ptr<long> page{};
  shared_ptr<string> query{};
  shared_ptr<string> searchEngine{};
  shared_ptr<string> searchPlan{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> timeRange{};

  AISearchQuery() {}

  explicit AISearchQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (card) {
      res["card"] = boost::any(*card);
    }
    if (cardQuery) {
      res["cardQuery"] = boost::any(*cardQuery);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (searchEngine) {
      res["searchEngine"] = boost::any(*searchEngine);
    }
    if (searchPlan) {
      res["searchPlan"] = boost::any(*searchPlan);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (timeRange) {
      res["timeRange"] = boost::any(*timeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("card") != m.end() && !m["card"].empty()) {
      card = make_shared<string>(boost::any_cast<string>(m["card"]));
    }
    if (m.find("cardQuery") != m.end() && !m["cardQuery"].empty()) {
      cardQuery = make_shared<string>(boost::any_cast<string>(m["cardQuery"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("searchEngine") != m.end() && !m["searchEngine"].empty()) {
      searchEngine = make_shared<string>(boost::any_cast<string>(m["searchEngine"]));
    }
    if (m.find("searchPlan") != m.end() && !m["searchPlan"].empty()) {
      searchPlan = make_shared<string>(boost::any_cast<string>(m["searchPlan"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("timeRange") != m.end() && !m["timeRange"].empty()) {
      timeRange = make_shared<string>(boost::any_cast<string>(m["timeRange"]));
    }
  }


  virtual ~AISearchQuery() = default;
};
class IncludeImage : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<string> imageLink{};
  shared_ptr<long> width{};

  IncludeImage() {}

  explicit IncludeImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["height"] = boost::any(*height);
    }
    if (imageLink) {
      res["imageLink"] = boost::any(*imageLink);
    }
    if (width) {
      res["width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("height") != m.end() && !m["height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["height"]));
    }
    if (m.find("imageLink") != m.end() && !m["imageLink"].empty()) {
      imageLink = make_shared<string>(boost::any_cast<string>(m["imageLink"]));
    }
    if (m.find("width") != m.end() && !m["width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["width"]));
    }
  }


  virtual ~IncludeImage() = default;
};
class ScorePageItem : public Darabonba::Model {
public:
  shared_ptr<string> cardType{};
  shared_ptr<string> displayLink{};
  shared_ptr<string> hostLogo{};
  shared_ptr<string> hostname{};
  shared_ptr<string> htmlSnippet{};
  shared_ptr<string> htmlTitle{};
  shared_ptr<vector<IncludeImage>> images{};
  shared_ptr<string> link{};
  shared_ptr<string> mainText{};
  shared_ptr<string> markdownText{};
  shared_ptr<string> mime{};
  shared_ptr<map<string, string>> pageMap{};
  shared_ptr<long> publishTime{};
  shared_ptr<double> score{};
  shared_ptr<string> siteLabel{};
  shared_ptr<string> snippet{};
  shared_ptr<string> title{};

  ScorePageItem() {}

  explicit ScorePageItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardType) {
      res["cardType"] = boost::any(*cardType);
    }
    if (displayLink) {
      res["displayLink"] = boost::any(*displayLink);
    }
    if (hostLogo) {
      res["hostLogo"] = boost::any(*hostLogo);
    }
    if (hostname) {
      res["hostname"] = boost::any(*hostname);
    }
    if (htmlSnippet) {
      res["htmlSnippet"] = boost::any(*htmlSnippet);
    }
    if (htmlTitle) {
      res["htmlTitle"] = boost::any(*htmlTitle);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["images"] = boost::any(temp1);
    }
    if (link) {
      res["link"] = boost::any(*link);
    }
    if (mainText) {
      res["mainText"] = boost::any(*mainText);
    }
    if (markdownText) {
      res["markdownText"] = boost::any(*markdownText);
    }
    if (mime) {
      res["mime"] = boost::any(*mime);
    }
    if (pageMap) {
      res["pageMap"] = boost::any(*pageMap);
    }
    if (publishTime) {
      res["publishTime"] = boost::any(*publishTime);
    }
    if (score) {
      res["score"] = boost::any(*score);
    }
    if (siteLabel) {
      res["siteLabel"] = boost::any(*siteLabel);
    }
    if (snippet) {
      res["snippet"] = boost::any(*snippet);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cardType") != m.end() && !m["cardType"].empty()) {
      cardType = make_shared<string>(boost::any_cast<string>(m["cardType"]));
    }
    if (m.find("displayLink") != m.end() && !m["displayLink"].empty()) {
      displayLink = make_shared<string>(boost::any_cast<string>(m["displayLink"]));
    }
    if (m.find("hostLogo") != m.end() && !m["hostLogo"].empty()) {
      hostLogo = make_shared<string>(boost::any_cast<string>(m["hostLogo"]));
    }
    if (m.find("hostname") != m.end() && !m["hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["hostname"]));
    }
    if (m.find("htmlSnippet") != m.end() && !m["htmlSnippet"].empty()) {
      htmlSnippet = make_shared<string>(boost::any_cast<string>(m["htmlSnippet"]));
    }
    if (m.find("htmlTitle") != m.end() && !m["htmlTitle"].empty()) {
      htmlTitle = make_shared<string>(boost::any_cast<string>(m["htmlTitle"]));
    }
    if (m.find("images") != m.end() && !m["images"].empty()) {
      if (typeid(vector<boost::any>) == m["images"].type()) {
        vector<IncludeImage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IncludeImage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<IncludeImage>>(expect1);
      }
    }
    if (m.find("link") != m.end() && !m["link"].empty()) {
      link = make_shared<string>(boost::any_cast<string>(m["link"]));
    }
    if (m.find("mainText") != m.end() && !m["mainText"].empty()) {
      mainText = make_shared<string>(boost::any_cast<string>(m["mainText"]));
    }
    if (m.find("markdownText") != m.end() && !m["markdownText"].empty()) {
      markdownText = make_shared<string>(boost::any_cast<string>(m["markdownText"]));
    }
    if (m.find("mime") != m.end() && !m["mime"].empty()) {
      mime = make_shared<string>(boost::any_cast<string>(m["mime"]));
    }
    if (m.find("pageMap") != m.end() && !m["pageMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["pageMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      pageMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("publishTime") != m.end() && !m["publishTime"].empty()) {
      publishTime = make_shared<long>(boost::any_cast<long>(m["publishTime"]));
    }
    if (m.find("score") != m.end() && !m["score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["score"]));
    }
    if (m.find("siteLabel") != m.end() && !m["siteLabel"].empty()) {
      siteLabel = make_shared<string>(boost::any_cast<string>(m["siteLabel"]));
    }
    if (m.find("snippet") != m.end() && !m["snippet"].empty()) {
      snippet = make_shared<string>(boost::any_cast<string>(m["snippet"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~ScorePageItem() = default;
};
class QueryContextOriginalQuery : public Darabonba::Model {
public:
  shared_ptr<string> industry{};
  shared_ptr<string> page{};
  shared_ptr<string> query{};
  shared_ptr<string> timeRange{};

  QueryContextOriginalQuery() {}

  explicit QueryContextOriginalQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (timeRange) {
      res["timeRange"] = boost::any(*timeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<string>(boost::any_cast<string>(m["page"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("timeRange") != m.end() && !m["timeRange"].empty()) {
      timeRange = make_shared<string>(boost::any_cast<string>(m["timeRange"]));
    }
  }


  virtual ~QueryContextOriginalQuery() = default;
};
class QueryContextRewrite : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> timeRange{};

  QueryContextRewrite() {}

  explicit QueryContextRewrite(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (timeRange) {
      res["timeRange"] = boost::any(*timeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("timeRange") != m.end() && !m["timeRange"].empty()) {
      timeRange = make_shared<string>(boost::any_cast<string>(m["timeRange"]));
    }
  }


  virtual ~QueryContextRewrite() = default;
};
class QueryContext : public Darabonba::Model {
public:
  shared_ptr<QueryContextOriginalQuery> originalQuery{};
  shared_ptr<QueryContextRewrite> rewrite{};

  QueryContext() {}

  explicit QueryContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalQuery) {
      res["originalQuery"] = originalQuery ? boost::any(originalQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rewrite) {
      res["rewrite"] = rewrite ? boost::any(rewrite->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("originalQuery") != m.end() && !m["originalQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["originalQuery"].type()) {
        QueryContextOriginalQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["originalQuery"]));
        originalQuery = make_shared<QueryContextOriginalQuery>(model1);
      }
    }
    if (m.find("rewrite") != m.end() && !m["rewrite"].empty()) {
      if (typeid(map<string, boost::any>) == m["rewrite"].type()) {
        QueryContextRewrite model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["rewrite"]));
        rewrite = make_shared<QueryContextRewrite>(model1);
      }
    }
  }


  virtual ~QueryContext() = default;
};
class SceneItem : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> type{};

  SceneItem() {}

  explicit SceneItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["detail"] = boost::any(*detail);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["detail"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~SceneItem() = default;
};
class SearchInformation : public Darabonba::Model {
public:
  shared_ptr<long> searchTime{};
  shared_ptr<long> total{};

  SearchInformation() {}

  explicit SearchInformation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (searchTime) {
      res["searchTime"] = boost::any(*searchTime);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("searchTime") != m.end() && !m["searchTime"].empty()) {
      searchTime = make_shared<long>(boost::any_cast<long>(m["searchTime"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~SearchInformation() = default;
};
class WeiboItem : public Darabonba::Model {
public:
  shared_ptr<string> cardType{};
  shared_ptr<string> homepageLink{};
  shared_ptr<string> htmlSnippet{};
  shared_ptr<vector<string>> images{};
  shared_ptr<string> link{};
  shared_ptr<string> publishDisplayTime{};
  shared_ptr<string> username{};

  WeiboItem() {}

  explicit WeiboItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardType) {
      res["cardType"] = boost::any(*cardType);
    }
    if (homepageLink) {
      res["homepageLink"] = boost::any(*homepageLink);
    }
    if (htmlSnippet) {
      res["htmlSnippet"] = boost::any(*htmlSnippet);
    }
    if (images) {
      res["images"] = boost::any(*images);
    }
    if (link) {
      res["link"] = boost::any(*link);
    }
    if (publishDisplayTime) {
      res["publishDisplayTime"] = boost::any(*publishDisplayTime);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cardType") != m.end() && !m["cardType"].empty()) {
      cardType = make_shared<string>(boost::any_cast<string>(m["cardType"]));
    }
    if (m.find("homepageLink") != m.end() && !m["homepageLink"].empty()) {
      homepageLink = make_shared<string>(boost::any_cast<string>(m["homepageLink"]));
    }
    if (m.find("htmlSnippet") != m.end() && !m["htmlSnippet"].empty()) {
      htmlSnippet = make_shared<string>(boost::any_cast<string>(m["htmlSnippet"]));
    }
    if (m.find("images") != m.end() && !m["images"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["images"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["images"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      images = make_shared<vector<string>>(toVec1);
    }
    if (m.find("link") != m.end() && !m["link"].empty()) {
      link = make_shared<string>(boost::any_cast<string>(m["link"]));
    }
    if (m.find("publishDisplayTime") != m.end() && !m["publishDisplayTime"].empty()) {
      publishDisplayTime = make_shared<string>(boost::any_cast<string>(m["publishDisplayTime"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~WeiboItem() = default;
};
class GenericSearchResult : public Darabonba::Model {
public:
  shared_ptr<vector<ScorePageItem>> pageItems{};
  shared_ptr<QueryContext> queryContext{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<SceneItem>> sceneItems{};
  shared_ptr<SearchInformation> searchInformation{};
  shared_ptr<vector<WeiboItem>> weiboItems{};

  GenericSearchResult() {}

  explicit GenericSearchResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageItems) {
      vector<boost::any> temp1;
      for(auto item1:*pageItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pageItems"] = boost::any(temp1);
    }
    if (queryContext) {
      res["queryContext"] = queryContext ? boost::any(queryContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sceneItems) {
      vector<boost::any> temp1;
      for(auto item1:*sceneItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sceneItems"] = boost::any(temp1);
    }
    if (searchInformation) {
      res["searchInformation"] = searchInformation ? boost::any(searchInformation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weiboItems) {
      vector<boost::any> temp1;
      for(auto item1:*weiboItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["weiboItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageItems") != m.end() && !m["pageItems"].empty()) {
      if (typeid(vector<boost::any>) == m["pageItems"].type()) {
        vector<ScorePageItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pageItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScorePageItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageItems = make_shared<vector<ScorePageItem>>(expect1);
      }
    }
    if (m.find("queryContext") != m.end() && !m["queryContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryContext"].type()) {
        QueryContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryContext"]));
        queryContext = make_shared<QueryContext>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sceneItems") != m.end() && !m["sceneItems"].empty()) {
      if (typeid(vector<boost::any>) == m["sceneItems"].type()) {
        vector<SceneItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sceneItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SceneItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sceneItems = make_shared<vector<SceneItem>>(expect1);
      }
    }
    if (m.find("searchInformation") != m.end() && !m["searchInformation"].empty()) {
      if (typeid(map<string, boost::any>) == m["searchInformation"].type()) {
        SearchInformation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["searchInformation"]));
        searchInformation = make_shared<SearchInformation>(model1);
      }
    }
    if (m.find("weiboItems") != m.end() && !m["weiboItems"].empty()) {
      if (typeid(vector<boost::any>) == m["weiboItems"].type()) {
        vector<WeiboItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["weiboItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            WeiboItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        weiboItems = make_shared<vector<WeiboItem>>(expect1);
      }
    }
  }


  virtual ~GenericSearchResult() = default;
};
class AiSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> industry{};
  shared_ptr<long> page{};
  shared_ptr<string> query{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> timeRange{};

  AiSearchRequest() {}

  explicit AiSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (timeRange) {
      res["timeRange"] = boost::any(*timeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("timeRange") != m.end() && !m["timeRange"].empty()) {
      timeRange = make_shared<string>(boost::any_cast<string>(m["timeRange"]));
    }
  }


  virtual ~AiSearchRequest() = default;
};
class AiSearchResponseBodyHeaderQueryContextOriginalQuery : public Darabonba::Model {
public:
  shared_ptr<string> industry{};
  shared_ptr<long> page{};
  shared_ptr<string> query{};
  shared_ptr<string> timeRange{};

  AiSearchResponseBodyHeaderQueryContextOriginalQuery() {}

  explicit AiSearchResponseBodyHeaderQueryContextOriginalQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (timeRange) {
      res["timeRange"] = boost::any(*timeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("timeRange") != m.end() && !m["timeRange"].empty()) {
      timeRange = make_shared<string>(boost::any_cast<string>(m["timeRange"]));
    }
  }


  virtual ~AiSearchResponseBodyHeaderQueryContextOriginalQuery() = default;
};
class AiSearchResponseBodyHeaderQueryContextRewrite : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> timeRange{};

  AiSearchResponseBodyHeaderQueryContextRewrite() {}

  explicit AiSearchResponseBodyHeaderQueryContextRewrite(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (timeRange) {
      res["timeRange"] = boost::any(*timeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("timeRange") != m.end() && !m["timeRange"].empty()) {
      timeRange = make_shared<string>(boost::any_cast<string>(m["timeRange"]));
    }
  }


  virtual ~AiSearchResponseBodyHeaderQueryContextRewrite() = default;
};
class AiSearchResponseBodyHeaderQueryContext : public Darabonba::Model {
public:
  shared_ptr<AiSearchResponseBodyHeaderQueryContextOriginalQuery> originalQuery{};
  shared_ptr<AiSearchResponseBodyHeaderQueryContextRewrite> rewrite{};

  AiSearchResponseBodyHeaderQueryContext() {}

  explicit AiSearchResponseBodyHeaderQueryContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalQuery) {
      res["originalQuery"] = originalQuery ? boost::any(originalQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rewrite) {
      res["rewrite"] = rewrite ? boost::any(rewrite->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("originalQuery") != m.end() && !m["originalQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["originalQuery"].type()) {
        AiSearchResponseBodyHeaderQueryContextOriginalQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["originalQuery"]));
        originalQuery = make_shared<AiSearchResponseBodyHeaderQueryContextOriginalQuery>(model1);
      }
    }
    if (m.find("rewrite") != m.end() && !m["rewrite"].empty()) {
      if (typeid(map<string, boost::any>) == m["rewrite"].type()) {
        AiSearchResponseBodyHeaderQueryContextRewrite model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["rewrite"]));
        rewrite = make_shared<AiSearchResponseBodyHeaderQueryContextRewrite>(model1);
      }
    }
  }


  virtual ~AiSearchResponseBodyHeaderQueryContext() = default;
};
class AiSearchResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> event{};
  shared_ptr<string> eventId{};
  shared_ptr<AiSearchResponseBodyHeaderQueryContext> queryContext{};
  shared_ptr<long> responseTime{};

  AiSearchResponseBodyHeader() {}

  explicit AiSearchResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventId) {
      res["eventId"] = boost::any(*eventId);
    }
    if (queryContext) {
      res["queryContext"] = queryContext ? boost::any(queryContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseTime) {
      res["responseTime"] = boost::any(*responseTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventId") != m.end() && !m["eventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["eventId"]));
    }
    if (m.find("queryContext") != m.end() && !m["queryContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryContext"].type()) {
        AiSearchResponseBodyHeaderQueryContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryContext"]));
        queryContext = make_shared<AiSearchResponseBodyHeaderQueryContext>(model1);
      }
    }
    if (m.find("responseTime") != m.end() && !m["responseTime"].empty()) {
      responseTime = make_shared<long>(boost::any_cast<long>(m["responseTime"]));
    }
  }


  virtual ~AiSearchResponseBodyHeader() = default;
};
class AiSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<AiSearchResponseBodyHeader> header{};
  shared_ptr<string> payload{};
  shared_ptr<string> requestId{};

  AiSearchResponseBody() {}

  explicit AiSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = boost::any(*payload);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        AiSearchResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<AiSearchResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["payload"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AiSearchResponseBody() = default;
};
class AiSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AiSearchResponseBody> body{};

  AiSearchResponse() {}

  explicit AiSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AiSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AiSearchResponseBody>(model1);
      }
    }
  }


  virtual ~AiSearchResponse() = default;
};
class GenericAdvancedSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> query{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> timeRange{};

  GenericAdvancedSearchRequest() {}

  explicit GenericAdvancedSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (timeRange) {
      res["timeRange"] = boost::any(*timeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("timeRange") != m.end() && !m["timeRange"].empty()) {
      timeRange = make_shared<string>(boost::any_cast<string>(m["timeRange"]));
    }
  }


  virtual ~GenericAdvancedSearchRequest() = default;
};
class GenericAdvancedSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenericSearchResult> body{};

  GenericAdvancedSearchResponse() {}

  explicit GenericAdvancedSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenericSearchResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenericSearchResult>(model1);
      }
    }
  }


  virtual ~GenericAdvancedSearchResponse() = default;
};
class GenericSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> industry{};
  shared_ptr<long> page{};
  shared_ptr<string> query{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> timeRange{};

  GenericSearchRequest() {}

  explicit GenericSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (timeRange) {
      res["timeRange"] = boost::any(*timeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("timeRange") != m.end() && !m["timeRange"].empty()) {
      timeRange = make_shared<string>(boost::any_cast<string>(m["timeRange"]));
    }
  }


  virtual ~GenericSearchRequest() = default;
};
class GenericSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenericSearchResult> body{};

  GenericSearchResponse() {}

  explicit GenericSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenericSearchResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenericSearchResult>(model1);
      }
    }
  }


  virtual ~GenericSearchResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AiSearchResponse aiSearchWithOptions(shared_ptr<AiSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AiSearchResponse aiSearch(shared_ptr<AiSearchRequest> request);
  GenericAdvancedSearchResponse genericAdvancedSearchWithOptions(shared_ptr<GenericAdvancedSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenericAdvancedSearchResponse genericAdvancedSearch(shared_ptr<GenericAdvancedSearchRequest> request);
  GenericSearchResponse genericSearchWithOptions(shared_ptr<GenericSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenericSearchResponse genericSearch(shared_ptr<GenericSearchRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IQS20241111

#endif
